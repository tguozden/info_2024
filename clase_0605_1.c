// segundo parcial

#include<stdio.h>

int cuenta_letra(char letra, char *cadena){
   int ncont = 0;
   int i = 0;

   while(cadena[i] != '\0' ){
      if(cadena[i] == letra) ncont++;
      i++;
   }

   return ncont;

}
typedef struct{
        int cant;
        char letra;
    } freq_t;

int main(){

    freq_t frec[5];

    frec[0].letra = 'a';
    frec[1].letra = 'e';
    frec[2].letra = 'i';
    frec[3].letra = 'o';
    frec[4].letra = 'u';

    char cadena[100] = "murcielago en paris";

    // funcion que reciba el arreglo frec y la cadena de caracteres y calcule
    for(int i = 0;i<5;i++)
        frec[i].cant = cuenta_letra(frec[i].letra, cadena);
    // funcion que imprima la frecuencia de cada letar en pantalla
    for(int i = 0;i<5;i++)
        printf("la letra %c está %d veces\n", frec[i].letra, frec[i].cant);


    return 0;
}

