#include<stdio.h>
#include "clase0522.h"

int main(){
   

   alumno_t lucas[4];
   
   for(int i=0;i<4;i++){
      carga_alumno(&lucas[i]);
   }
   for(int i=0;i<4;i++){
      imprime_alumno(lucas[i]);
   }
   
   
   
/*   printf("ingresá el nombre de lucas\n");
   scanf("%s", lucas.nombre);
   printf("nombre es %s\n", lucas.nombre);
   printf("la primera letra es %c\n", lucas.nombre[0]);
   
   
   scanf("%d", &lucas.edad);
   
   printf("%s tiene %d años\n", lucas.nombre, lucas.edad);
*/
      
   
   
   return 0;

}
