#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct {
      char nombre[100];
      char apellido[100];
   } alumno_t;
   
void carga_alumno(alumno_t *pepe){
   printf("ingrese nombre alumno: ");
   scanf("%s", pepe[0].nombre);
   printf("ingrese apellido alumno: ");   
   scanf("%s", pepe[0].apellido);
}

void carga_alumno_otra(alumno_t *pepe){
   printf("ingrese nombre alumno: ");
   scanf("%s", pepe->nombre);
   printf("ingrese apellido alumno: ");   
   scanf("%s", pepe->apellido);
}


void carga_variable(int *numero){
   *numero =  1;
}
void carga_2(int numero[]){
   numero[0] =  1;
}
void carga_3(int * numero){
   numero[0] =  1;
}

int main(){
   
   int n;
   carga_variable(&n);
   
   alumno_t carlitos;
   
   carga_alumno_otra( &carlitos);

   printf("%s %s\n", carlitos.nombre, carlitos.apellido);

   return 0;
}
