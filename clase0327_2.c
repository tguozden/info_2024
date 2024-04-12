#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 1000000

int main(){
  
  float w[N];
  int i;
  float acum = 0;
  
  srand(time(NULL));  // seed random

  for(i=0;i<N;i++)
    w[i] = (float)rand()/RAND_MAX; 
  
  for(i=0;i<N;i++)
    acum += w[i];
  printf("el promedio es %f\n", acum/N);
  
  return 0;
}
