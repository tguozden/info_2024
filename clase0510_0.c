#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 4

void inicializa_vector(int v[], int n);
void imprime_vector(int v[], int n);
void invierte_vector(int v[], int n);
void inicializa_random(int v[], int n);

int ordenado(int v[], int n);
/*
ordenado devuelve 1 si las componentes del vector están en orden creciente
y devuelve 0 si cualquier otra cosa

*/
int main(){
   int v[N];
   srand(clock());
   
   inicializa_random(v, N);
   imprime_vector(v, N);
   
   if(ordenado(v, N)) printf("el vector está ordenado\n");
   else printf("el vector no está ordenado\n");


   return 0;
}


void invierte_vector(int v[], int nvec){//nvec = N
/*   int aux;
   for(int i=0; i< nvec/2; i++){
      aux = v[i];
      v[i] = v[nvec - 1 - i];
      v[nvec - 1 - i] = aux;
   }*/

   int aux, il, ir;
   il = 0;
   ir = nvec - 1;
   while(il < ir){
      aux = v[il];
      v[il] = v[ir];
      v[ir] = aux;
      
      il++;
      ir--;
   }
      
      
   
   
   
   
   

}

void inicializa_random(int v[], int n){
   for(int i=0;i<n;i++)
      v[i] = rand()%5;

}

void inicializa_vector(int v[], int n){
   for(int i=0;i<n;i++)
      v[i] = 2*i + 1;

}
void imprime_vector(int v[], int n){
   for(int i=0;i<n;i++)
      printf("%2d ", v[i]);
   printf("\n");

}




