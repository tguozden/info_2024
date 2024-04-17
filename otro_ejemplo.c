/*
  inicializar un vector de N componentes con números entre 17 y 37
  mostrar el mínimo y el máximo e indicar en qué índices se encuentran
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

int main(){
   int v[N];
   int min = 40, max = 10;
   int imin, imax;
   int i;
   int frec[21] = {0};
/*   
v[i]=17 --->  frec[0]
     18 --->       1
     19 --->       2
     .......
     35 --->       18
     36 --->       19
     37 --->       20
*/   

   srand(clock());
   for(i=0;i<N;i++)
      v[i] = rand()%21 + 17;
      
   for(i=0;i<N;i++)
      frec[v[i] - 17]++;
   
   for(i=0;i<N;i++){
      if(v[i]<min){ 
         min = v[i];
         imin = i;
      }
      if(v[i]>max){ 
         max = v[i];
         imax = i;
      }
   }   

   for(i=0;i<N;i++)
      printf("%d ", v[i]);
   
   
   printf("\n\nmin = %d; max = %d\n\n", min, max);
   printf("\n\nimin = %d; imax = %d\n\n", imin, imax);
   
   for(i=0;i<21;i++)
      printf("el número %d salió %d veces\n", i + 17, frec[i]);

   
   
   return 0;
}

