// segundo parcial 

#include<stdio.h>

int ordenado_sentido(int signo, int vec[], int n){
   int ord = 1;
   
   for(int i=0;i<n-1;i++)
      if(signo*vec[i] < signo*vec[i+1])
         ord = 0;

   return ord;
}

int ordenado(int vec[], int n){
//devuelve 1 si ordenado 0 si no
   int ord;
   
   if(ordenado_sentido(1, vec, n) ||  ordenado_sentido(-1, vec, n))
      ord = 1;
   else
      ord = 0;
   return ord;
}



int ordenado_decreciente(int vec[], int n){
   int ord = 1;
   
   for(int i=0;i<n-1;i++)
      if(vec[i] < vec[i+1])
         ord = 0;

   return ord;
}

int ordenado_creciente(int vec[], int n){
   int ord = 1;
   
   for(int i=0;i<n-1;i++)
      if(vec[i] > vec[i+1])
         ord = 0;

   return ord;
}
int ordenado_creciente_2(int vec[], int n){
  
   for(int i=0;i<n-1;i++)
      if(vec[i] > vec[i+1])
         return 0;

   return 1;
}




int main(){

   int a[5] = {1, 2, 3, 4, 5};
   int b[5] = {5, 4, 3, 2, 1};
   int c[5] = {1, 2, 8, 4, 5};
   
   if(ordenado(c, 5))
      printf("el vector está ordenado\n");
   else
      printf("el vector no está ordenado\n");

   return 0;

}

















