#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int ordenado(int vec[], int n){
    int ord = 1; // supongo que está ordenado

    for (int i=0;i<n-1;i++)
       if (vec[i] > vec[i+1])
           ord = 0;
     
    return ord;
}


void inicializa_random(int v[], int n){
   for(int i=0;i<n;i++)
      v[i] = rand()%20;

}

void imprime_vector(int v[], int n){
   for(int i=0;i<n;i++)
      printf("%2d ", v[i]);
   printf("\n");

}
int main(){
    
    int v[4];  
    srand(clock());
    inicializa_random(v, 4);
    imprime_vector(v, 4);
    if(ordenado(v, 4))
       printf ("el vector está ordenado en forma creciente \n");
    else
       printf ("el vector no está ordenado de forma creciente \n");

    return 0;

}
