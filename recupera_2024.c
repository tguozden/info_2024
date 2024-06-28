#include<stdio.h>
#include<stdlib.h>
#include<time.h>


typedef struct{
    float temp;
    float lluvia;
    char sitio[100];
} meteo_t;
void asigna_nombre(meteo_t *estacion, char cadena[]){
    // muestro una manera, también podía usarse el strcpy pero agregando la librería string.h, o for, o while
    int i = -1;
    do{
        i++;
        estacion->sitio[i]=cadena[i];
    }while(cadena[i]!=0);
}
void asigna_float(meteo_t *estacion){
    int n1 = rand()%401 - 100; //sorteo un número entero entre -100 y 300 ambos inclusive
    estacion->temp = n1/10.0;

    int n2 = rand()%1001;
    estacion->lluvia = n2/10.0;

}
void imprime(meteo_t estacion){
    printf("%s\n", estacion.sitio);
    printf("%f\n", estacion.temp);
    printf("%f\n\n", estacion.lluvia);
}


int main(){
    meteo_t barilo;
    char cadena[100];
    printf("ingrese un nombre:");
    scanf("%s", cadena);
    asigna_nombre(&barilo, cadena);
    srand(time(0));
    asigna_float(&barilo);
    imprime(barilo);
    return 0;
}
