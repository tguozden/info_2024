

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

