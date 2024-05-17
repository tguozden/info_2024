#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NMAX 1000000

void encripta(char mensaje[], char codigo[], char random[]);
void desencripta(char mensaje[]);



void mezcla_codigo(char codigo[], char random[]);

int main(){
   char mensaje[NMAX] = "Argentina, officially the Argentine Republic, \nis a country in the southern half of South America. \nArgentina covers an area of  making it the second\nlargest country in South America after Brazil,\nthe fourth largest country in the Americas,\nand the eighth largest country in the world.";
//   fgets(mensaje, NMAX, stdin);
   
   char codigo[1000] = "abcdefghijklmnopqrstuvwxyz \n,.ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char random[1000] = "QZ nwdNXqRLzaVF\npKMijBGIHyxmtr,vcEYfCeSbOo.WDTslPJgUhuAk";
   
//   mezcla_codigo(codigo, random);
//   printf("%s\n", codigo);
//   printf("%s\n", random);

   printf("%s\n\n", mensaje);
   encripta(mensaje, codigo, random);
   printf("%s\n\n", mensaje);
   encripta(mensaje, random, codigo);
   printf("%s\n", mensaje);
   
   return 0;
}


void mezcla_codigo(char codigo[], char random[]){
   strcpy(random, codigo);
   char aux;
   int n = strlen(random);
   int i, j, k;
   for(i=0;i<10000;i++){
      j = rand()%n;
      k = rand()%n;
      aux = random[j];
      random[j] = random[k];
      random[k] = aux;
   }
      


}


int indice(char letra, char cadena[]){
   int i=0;
   while(letra!=cadena[i] && i<strlen(cadena)) i++;
   if(i == strlen(cadena)) printf("no encontré la letra %c \n devuelvo el último que es el caracter nulo\n", letra);
   return i;
}

void encripta(char mensaje[], char codigo[], char random[]){
   int i, j;
   for(i=0;mensaje[i]!='\0';i++){
      j = indice(mensaje[i], codigo);
      mensaje[i] = random[j];
   }
}

   
/* cargar el abcdario (se puede hacer a mano)
   int i=0; char letra ='a'
   do{
     codigo[i] = letra;
     i++;letra++;
   }while(letra!='z');
  *//* 
   
   for(char letra='a';letra!='z';letra++)
      codigo[letra - 'a']=letra;
   */

