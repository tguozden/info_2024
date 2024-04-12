#include<stdio.h>
#include<stdlib.h> // rand srand
#include<time.h>
#define N 10

int main(){
  int vector[N];
  int frec[5]={0};
  int i;
  
  srand(time(0));
  for(i=0;i<N;i++){
    vector[i] = rand()%5+1;
  }
  
  for(i=0;i<N;i++){
    printf("%d ", vector[i]);
  }
  printf("\n");
  
  //evaluamos la frecuencia de cada posibilidad
  
  for(i=0;i<N;i++){
    frec[vector[i]-1]++;
  }
  
  for(i=0;i<5;i++){
    printf("el valor %d salió %d veces\n", i+1, frec[i]);
  }

  
  
  
  
  
  
  
  
  
   
    
  return 0;
}
