#include<stdio.h>
#include<stdlib.h> // rand srand
#include<time.h>
#define N 100
#define M 20
#define L 10

int main(){
  int vector[N];
  int frec[M]={0};
  int i, j;
  int sumarand;
  
  srand(clock());
  for(i=0;i<N;i++){
    sumarand = 0;
    for(j=0;j<L;j++) sumarand+= rand()%M+1;
    vector[i] = sumarand/L;
  }
  
  for(i=0;i<N;i++){
//    printf("%d ", vector[i]);
  }
  printf("\n");
  
  //evaluamos la frecuencia de cada posibilidad
  
  for(i=0;i<N;i++){
    frec[vector[i]-1]++;
/*  switch(vector[i]){
  case 3:
    frec[0]++;
    break;
  case 2:  
    frec[1]++;
    break;

  case 3:  
  case 4:
  case 5:
  default:
    printf("error!\n");*/
  }
  
  for(i=0;i<M;i++){
    printf("x=%2d: ", i+1);
    for(j=0;j<frec[i];j++){
      printf("*");
    }
    printf("\n");
  }

  
  
  
  
  
  
  
  
  
   
    
  return 0;
}
