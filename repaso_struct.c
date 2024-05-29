#include<stdio.h>

// (esto es lo mismo)
struct alumno {
    char nombre[100];
    char apellido[100];
    int edad;
};

typedef int entero;

typedef struct {
    char nombre[100];
    char apellido[100];
    int edad;
} alumno_t;

int main(){
   entero i;
   alumno_t chepibe;
   
   scanf("%s", chepibe.nombre);
   scanf("%s", chepibe.apellido);
   chepibe.edad = 18;
   printf("chepibe  es %s %s tiene %d años\n", chepibe.nombre, chepibe.apellido, chepibe.edad);
   
   return 0;

}
