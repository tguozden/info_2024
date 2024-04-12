/*hola que tal*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

float promedio(int v[], int n);// esto es un prototipo
void imprime_vector(int v[], int n);
void inicializa_vector(int v[], int n);


int main(){
   int v[N];
   inicializa_vector(v, N);
   imprime_vector(v, N);   
   printf("el promedio es %f\n", promedio(v, N) );
   return 0;
}

float promedio(int v[], int n){
   int acum = 0;
   int i;
   for(i=0;i<n;i++)
      acum = acum + v[i];
   return (float)acum/n;
}

void imprime_vector(int v[], int n){
   int i;
   for(i=0;i<n;i++)
      printf("%d ", v[i]);
   printf("\n");
}

void inicializa_vector(int v[], int n){
   int i;
   srand(clock());
   for(i=0;i<n;i++)
      v[i] = rand()%5-2;
   
}
