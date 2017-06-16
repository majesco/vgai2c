#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <linux/inotify.h>
#include <string.h>
#include "readFile.c"

#define EVENT_SIZE  ( sizeof (struct inotify_event) )
#define EVENT_BUF_LEN     ( 1024 * ( EVENT_SIZE + 16 ) )

// Este programa monitorea un directorio por si hay cambios.
// en este proyecto, esto se utiliza para darse cuenta que se escribio a texto.json
// Si esto ocurre es por que un usuario utilizo la pagina web y envio un mensaje
// Entonces el API escribe a un archivo. Y este programa se da cuenta.
int main( )
{
    int length, i = 0;
    int fd;
    int wd;
    char buffer[EVENT_BUF_LEN];

    /*Crea la instancia INOTIFY */
    fd = inotify_init();

    /*Revisa si hay algun error*/
    if ( fd < 0 ) {
        perror( "inotify_init" );
    }

    // Agrega el mismo directorio de donde esto se ejecuta a ser monitoreado en caso de creacion o modificacion
    wd = inotify_add_watch( fd, ".", IN_CREATE | IN_MODIFY );

    //Lee para determinar que el evento ocurra en el directorio actual. Lee el bloque hasta que ocurra (Pooling)
    length = read( fd, buffer, EVENT_BUF_LEN ); 

    /*Revisa si hay errores*/
    if ( length < 0 ) {
        perror( "read" );
    }  

    // Lee la lista de cambios y actua sobre eso. Los diferentes cambios como: modificacion, eliminacion, creacion, abierto, etc...
    while ( i < length ) {     
        struct inotify_event *event = ( struct inotify_event * ) &buffer[ i ]; if ( event->len ) {
            if ( event->mask & IN_CREATE ) {
                if ( event->mask & IN_ISDIR ) { //no nos interesa
                }
                else {
                    printf( "New file %s created.\n", event->name ); //Nuevo archivo se creo
                    if ( strcmp (event->name, "texto.json") == 0 ){  //si el archivo se llama texto.json -> Nos interesa
                        printf( "File %s create.\n", event->name );  //un print para avisarnos

                        printf("%s\n", Search_in_File("texto.json")); //Llama a readFile para que analice el archivo
                    }
                }
            }
            else if ( event->mask & IN_MODIFY ) {
                if ( event->mask & IN_ISDIR ) { //no nos interesa
                }
                else {
                    if ( strcmp (event->name, "texto.json") == 0 ){ //Archivo modificado
                        printf( "File %s modified.\n", event->name ); //si el archivo se llama texto.json -> Nos interesa

                        printf("%s\n", Search_in_File("texto.json")); //Llama a readFile para que analice el archivo
                    }
                }
            }
        }
        i += EVENT_SIZE + event->len;
    }
    /*Remueve el “.” directorio de la lista de monitoreo*/
    inotify_rm_watch( fd, wd );

    /*Cierra la instancia de INOTIFY*/
    close( fd );
    main(); //El programa es recursivo entonces comienza de nuevo cuando termina de detectar un cambio
}