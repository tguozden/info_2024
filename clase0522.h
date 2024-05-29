

typedef struct {
      char nombre[100];
      char apellido[100];
   } alumno_t;
   
void carga_alumno(alumno_t *pepe){
   printf("ingrese nombre alumno: ");
   scanf("%s", (*pepe).nombre);
   printf("ingrese apellido alumno: ");   
   scanf("%s", (*pepe).apellido);
}


void imprime_alumno(alumno_t pepe){

   printf("nombre: %s\n", pepe.nombre);
   printf("apellido: %s\n", pepe.apellido);
}



/*void carga_alumno(alumno_t *pepe){
   printf("ingrese nombre alumno: ");
   scanf("%s", pepe->nombre);
   printf("ingrese apellido alumno: ");   
   scanf("%s", pepe->apellido);
}*/

