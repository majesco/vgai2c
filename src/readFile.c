#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//metodo para leer un archivo y conseguir datos de el.
//En este caso se provee el nombre del archivo, luego el programa lo abre
//y ubica la primera linea para tomar el contenido
//Luego analiza el texto para tomar solamente el valor de la clave
// mensaje del JSON. {"mensaje":"estees)!"}. En este ejemplo seria estees)!
extern char* Search_in_File(char *fname) {
  
  FILE *fp;
  char temp[512];

  // Abrir archivo
  if((fp = fopen(fname, "r")) == NULL) {
    return "error";
  }
  fgets(temp, 512, fp); //Lee archivp

  // char * newString = temp +12; //string nuevo es un substring comenzando en la posicion 12
  // int len = strlen(newString); //toma el tamanio del nuevo string.

  // newString[len-2] = 0; //Recorta el string para borrar "}
  // printf("%s %d\n",newString, strlen(newString) );
  char nuevo[20];
  memcpy( nuevo, &temp[12], 19 );
  int len =strlen(nuevo);

  printf("%d\n", len);
  nuevo[len-3] = '\0';
  printf("%s %li\n", nuevo, strlen(nuevo));

  //Cierra el archivo
  if(fp) {
    fclose(fp);
  }

  char *returnString;
  returnString = (char*)malloc(len*sizeof(char));
  strcpy(returnString, nuevo);

  return returnString; //retorna el string
}