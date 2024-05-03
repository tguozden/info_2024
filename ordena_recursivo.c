#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 10


void ordena_recursivo(int v[], int n);
void imprime_vector(int v[], int n);
void inicializa(int v[], int n);
int indice_minimo(int v[], int n);
void swap(int v[], int i, int j);

int main(){
   int v[N];
   srand(clock());
   inicializa(v, N);
   imprime_vector(v, N);
   ordena_recursivo(v, N);
   printf("\nordenado:\n");
   imprime_vector(v, N);
   return 0;
}


void ordena_recursivo(int v[], int n){
    int i = indice_minimo(v, n);
    swap(v, 0, i);
    if(n > 1) ordena_recursivo(v+1, n-1);
}

void swap(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int indice_minimo(int v[], int n){
    int imin = 0;
    int min;
    min = v[imin];
    for(int i=1;i<n;i++)
        if(v[i] < min){
            min = v[i];
            imin = i;
        }
    return imin;
}

void inicializa(int v[], int n){
    for(int i=0;i<n;i++)
        v[i] = rand()%4;
}

void imprime_vector(int v[], int n){
    for(int i=0;i<n;i++)
        printf("%d ", v[i]);
    printf("\n");
}
