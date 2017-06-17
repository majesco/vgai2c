#include <vgai2c.h>

/*num0Bers*/
uint8_t one[8] =
{
  0B00010000,
  0B00110000,
  0B00010000,
  0B00010000,
  0B00010000,
  0B00010000,
  0B00010000,
  0B00111000
};

uint8_t two[8] =
{
  0B00111000,
  0B01000100,
  0B00000100,
  0B00000100,
  0B00001000,
  0B00010000,
  0B00100000,
  0B01111100
};

uint8_t three[8] =
{
  0B00111000,
  0B01000100,
  0B00000100,
  0B00011000,
  0B00000100,
  0B00000100,
  0B01000100,
  0B00111000
};

uint8_t four[8] =
{
  0B00000100,
  0B00001100,
  0B00010100,
  0B00100100,
  0B01000100,
  0B01111100,
  0B00000100,
  0B00000100
};

uint8_t five[8] =
{
  0B01111100,
  0B01000000,
  0B01000000,
  0B01111000,
  0B00000100,
  0B00000100,
  0B01000100,
  0B00111000
 };

uint8_t six[8] =
{
  0B00111000,
  0B01000100,
  0B01000000,
  0B01111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111000
};

uint8_t seven[8] =
{
  0B01111100,
  0B00000100,
  0B00000100,
  0B00001000,
  0B00010000,
  0B00100000,
  0B00100000,
  0B00100000
};

uint8_t eight[8] =
{
  0B00111000,
  0B01000100,
  0B01000100,
  0B00111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111000
};

uint8_t nine[8] =
{
  0B00111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111100,
  0B00000100,
  0B01000100,
  0B00111000
};

uint8_t zero[8] =
{
  0B00111000,
  0B01000100,
  0B01000100,
  0B01000100,
  0B01000100,
  0B01000100,
  0B01000100,
  0B00111000
};
  
/*letters*/
uint8_t a[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01111110,
  0B01100110,
  0B01100110,
  0B01100110
};

uint8_t b[8] =
{
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01111100
};

uint8_t c[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100110,
  0B00111100
};

uint8_t d[8] =
{
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111100
};

uint8_t e[8] =
{
  0B00000000,
  0B01111110,
  0B01100000,
  0B01100000,
  0B01111100,
  0B01100000,
  0B01100000,
  0B01111110
};

uint8_t f[8] =
{
  0B00000000,
  0B01111110,
  0B01100000,
  0B01100000,
  0B01111100,
  0B01100000,
  0B01100000,
  0B01100000
};

uint8_t g[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B01100000,
  0B01101110,
  0B01100110,
  0B00111100
};

uint8_t h[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111110,
  0B01100110,
  0B01100110,
  0B01100110
};

uint8_t i[8] =
{
  0B00000000,
  0B00111100,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00111100
};

uint8_t j[8] =
{
  0B00000000,
  0B00011110,
  0B00001100,
  0B00001100,
  0B00001100,
  0B01101100,
  0B01101100,
  0B00111000
};

uint8_t k[8] =
{
  0B00000000,
  0B01100110,
  0B01101100,
  0B01111000,
  0B01110000,
  0B01111000,
  0B01101100,
  0B01100110
};

uint8_t l[8] =
{
  0B00000000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01100000,
  0B01111110
};

uint8_t m[8] =
{
  0B00000000,
  0B01100011,
  0B01110111,
  0B01111111,
  0B01101011,
  0B01100011,
  0B01100011,
  0B01100011
};

uint8_t n[8] =
{
  0B00000000,
  0B01100011,
  0B01110011,
  0B01111011,
  0B01101111,
  0B01100111,
  0B01100011,
  0B01100011
};

uint8_t o[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100
};

uint8_t p[8] =
{
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01100000,
  0B01100000
};

uint8_t q[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01101110,
  0B00111100,
  0B00000110
};

uint8_t r[8] =
{
  0B00000000,
  0B01111100,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01111000,
  0B01101100,
  0B01100110
};

uint8_t s[8] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B00111100,
  0B00000110,
  0B01100110,
  0B00111100
};

uint8_t t[8] =
{
  0B00000000,
  0B01111110,
  0B01011010,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000
};

uint8_t u[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111110
};

uint8_t v[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100,
  0B00011000
};

uint8_t w[8] =
{
  0B00000000,
  0B01100011,
  0B01100011,
  0B01100011,
  0B01101011,
  0B01111111,
  0B01110111,
  0B01100011
};

uint8_t x[8] =
{
  0B00000000,
  0B01100011,
  0B01100011,
  0B00110110,
  0B00011100,
  0B00110110,
  0B01100011,
  0B01100011
};

uint8_t y[8] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100,
  0B00011000,
  0B00011000,
  0B00011000
};

uint8_t z[8] =
{
  0B00000000,
  0B01111110,
  0B00000110,
  0B00001100,
  0B00011000,
  0B00110000,
  0B01100000,
  0B01111110
};

/*emojis*/

uint8_t happy[8] =
{
0B00111100,
0B01000010,
0B10100101,
0B10000001,
0B10100101,
0B10011001,
0B01000010,
0B00111100
};

uint8_t poker[8] =
{
0B00111100,
0B01000010,
0B10100101,
0B10000001,
0B10000001,
0B10111101,
0B01000010,
0B00111100
};

uint8_t sad[8] =
{
0B00111100,
0B01000010,
0B10100101,
0B10000001,
0B10000001,
0B10111101,
0B01000010,
0B00111100
};

uint8_t love[8] =
{
  0B00000000,
  0B00100010,
  0B01110111,
  0B00100010,
  0B00000000,
  0B00111110,
  0B00011100,
  0B00000000
};

uint8_t laugh[8] =
{
  0B11110000,
  0B00001001,
  0B10010110,
  0B00000110,
  0B11110110,
  0B01100110,
  0B00001001,
  0B11110000
};

uint8_t heart[8] =
{
  0B00110110,
  0B01111111,
  0B01111111,
  0B01111111,
  0B00111110,
  0B00011100,
  0B00001000,
  0B00000000
};

uint8_t mad[8] =
{
  0B00000000,
  0B00000000,
  0B01110111,
  0B00010001,
  0B00000000,
  0B00011110,
  0B00000000,
  0B00000000
};

uint8_t wow[8] =
{
  0B00000000,
  0B00100100,
  0B00000000,
  0B00011000,
  0B00100100,
  0B00100100,
  0B00011000,
  0B00000000
};

uint8_t wink[8] =
{
  0B00000000,
  0B00000000,
  0B00100100,
  0B00001000,
  0B00000000,
  0B00100100,
  0B00011000,
  0B00000000
};

uint8_t chinese[8] =
{
  0B00000000,
  0B00000000,
  0B01100110,
  0B00000000,
  0B00000000,
  0B00111100,
  0B00000000,
  0B00000000
};

uint8_t thoughtful[8] =
{
  0B00000000,
  0B00000000,
  0B00100100,
  0B00000000,
  0B00000000,
  0B00011100,
  0B00100000,
  0B00000000
};

//metodo para leer un archivo y conseguir datos de el.
//En este caso se provee el nombre del archivo, luego el programa lo abre
//y ubica la primera linea para tomar el contenido
//Luego analiza el texto para tomar solamente el valor de la clave
// mensaje del JSON. {"mensaje":"estees)!"}. En este ejemplo seria estees)!
char* Search_in_File(char *fname) {
	
	FILE *fp;
	char temp[512];

	// Abrir archivo
	if((fp = fopen(fname, "r")) == NULL) {
		return(-1);
	}
	fgets(temp, 512, fp); //Lee archivp

	char * newString = temp +12; //string nuevo es un substring comenzando en la posicion 12
	int len = strlen(newString); //toma el tamanio del nuevo string.

	newString[len-3] = 0; //Recorta el string para borrar "}


	//Cierra el archivo
	if(fp) {
		fclose(fp);
	}
   	return newString; //retorna el string
}

int send_to_driver(char character)
{

  switch(character) {
   case '1' :
      writeToMatrix(one);
      break;
	
   case '2'  :
      writeToMatrix(two);
      break; 
    
    case '3'  :
      writeToMatrix(three);
      break;

    case '4'  :
      writeToMatrix(four);
      break;

    case '5'  :
      writeToMatrix(five);
      break;

    case '6'  :
      writeToMatrix(six);
      break;
      
    case '7'  :
      writeToMatrix(seven);
      break;

    case '8'  :
      writeToMatrix(eight);
      break;

    case '9'  :
      writeToMatrix(nine);
      break;

    case '0'  :
      writeToMatrix(zero);
      break;

    case 'a'  :
      writeToMatrix(a);
      break;

    case 'b'  :
      writeToMatrix(b);
      break;

    case 'c'  :
      writeToMatrix(c);
      break;

    case 'd'  :
      writeToMatrix(d);
      break;

    case 'e'  :
      writeToMatrix(e);
      break;

    case 'f'  :
      writeToMatrix(f);
      break;

    case 'g'  :
      writeToMatrix(g);
      break;

    case 'h'  :
      writeToMatrix(h);
      break;

    case 'i'  :
      writeToMatrix(i);
      break;

    case 'j'  :
      writeToMatrix(j);
      break;

    case 'k'  :
      writeToMatrix(k);
      break;

    case 'l'  :
      writeToMatrix(l);
      break;

    case 'm'  :
      writeToMatrix(m);
      break;

    case 'n'  :
      writeToMatrix(n);
      break;

    case 'o'  :
      writeToMatrix(o);
      break;

    case 'p'  :
      writeToMatrix(p);
      break;

    case 'q'  :
      writeToMatrix(q);
      break;

    case 'r'  :
      writeToMatrix(r);
      break;

    case 's'  :
      writeToMatrix(s);
      break;

    case 't'  :
      writeToMatrix(t);
      break;

    case 'u'  :
      writeToMatrix(u);
      break;

    case 'v'  :
      writeToMatrix(v);
      break;

    case 'x'  :
      writeToMatrix(x);
      break;

    case 'y'  :
      writeToMatrix(y);
      break;

    case 'z'  :
      writeToMatrix(z);
      break;

    case '!'  :
      writeToMatrix(laugh);
      break;

    case '@'  :
      writeToMatrix(poker);
      break;  

    case '#'  :
      writeToMatrix(happy);
      break;

    case '$'  :
      writeToMatrix(mad);
      break;

    case '%'  :
      writeToMatrix(heart);
      break;

    case '^'  :
      writeToMatrix(love);
      break;

    case '&'  :
      writeToMatrix(wink);
      break;

    case '*'  :
      writeToMatrix(thoughtful);
      break;

    case '('  :
      writeToMatrix(chinese);
      break;

    case ')'  :
      writeToMatrix(wow);
      break;

    default :
      printf("Input character unrecognized.\n");
      exit(1);

	}
}

int parseMessage(char* message){
	int messagelen = strlen(message);
	int i;

	for (i = 0; i < messagelen; ++i)
	{
		send_to_driver(message[i]);
	}

	return 0;
}
// Este programa monitorea un directorio por si hay cambios.
// en este proyecto, esto se utiliza para darse cuenta que se escribio a texto.json
// Si esto ocurre es por que un usuario utilizo la pagina web y envio un mensaje
// Entonces el API escribe a un archivo. Y este programa se da cuenta.
int main()
{
    int length, i = 0;
    int fd;
    int wd;
    char buffer[EVENT_BUF_LEN];
    char *apimessage;
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
                        apimessage = Search_in_File("texto.json"); //Llama a search in file para que analice el archivo
                        printf("%s\n", apimessage); 
                        parseMessage(apimessage);
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


