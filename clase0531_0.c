#include<stdio.h>
#include "clase0522.h"

int main(){
   
   char aux[20] = "holamundo!";
//   alumno_t lucas;
//   printf("ingresá el nombre de lucas\n");



   printf("en aux está escrito: %s\n", aux);
//   scanf("%s", aux);      
//   printf("ahora dice: %s\n", aux);
   
   printf("la primera letra es: %c\n", *aux);
   printf("la segunda letra es: %c\n", aux[1]);
   printf("la segunda letra es: %c\n", *(aux + 1) );
   
   
   return 0;

}
