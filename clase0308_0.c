#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define N 10

void inicializa_vec(int vec[], int n);
void inicializa_vec_random(int vec[], int n);
void imprime_vec(int vec[], int n);
void swap(int vec[], int i, int j);
int indice_menor(int vec[], int n);
void ordena_vec(int vec[], int n);
void ordena_vec_recursivo(int vec[], int n);

int main(){
   int v[N];
//   srand(clock());
   inicializa_vec_random(v, N);  // v == &v[0]

   imprime_vec(&v[0], N);
   ordena_vec_recursivo(v, N);
   imprime_vec(v, N);
   

   return 0;
}

void ordena_vec_recursivo(int vec[], int n){
   swap(vec, 0, indice_menor(vec, n));
   if(n > 1)
      ordena_vec_recursivo(&vec[1], n-1); //&vec[1] == vec + 1

}

void ordena_vec(int vec[], int n){
   for(int i=0;i<n-1;i++)
     swap(&vec[i], 0, indice_menor(&vec[i], n-i));

}

int indice_menor(int vec[], int n){
   int vmin = 999999;   //vmin = v[0](otra opción)
   int imin;            //imin = 0 
   for(int i=0;i<n;i++)
      if(vec[i] < vmin){
         vmin = vec[i];
         imin = i;
      }
   return imin;
}

void swap(int vec[], int i, int j){
   int caja;
   caja = vec[i];
   vec[i] = vec[j];
   vec[j] = caja;
}


void inicializa_vec_random(int vec[], int n){
   for(int i=0;i<n;i++)
      vec[i] = rand()%20;
}



void inicializa_vec(int vec[], int n){
   for(int i=0;i<n;i++)
      vec[i] = i * i;
}

void imprime_vec(int vec[], int n){
   for(int i=0;i<n;i++)
      printf("%d ", vec[i]);
   printf("\n");
}
