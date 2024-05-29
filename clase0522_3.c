#include<stdio.h>

#include "clase0522.h"


int main(){
   alumno_t carlitos;
   
   carga_alumno_otra( &carlitos);

   printf("%s %s\n", carlitos.nombre, carlitos.apellido);

   return 0;
}
