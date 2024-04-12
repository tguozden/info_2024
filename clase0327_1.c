#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

int main(){
  
  int v[N];
  int i;
  
//  printf("rand max = %d\n", RAND_MAX);
//  printf("rand max = %d\n", RAND_MAX+1);
//  printf("rand max = %ld\n", RAND_MAX+1);
  
  srand(time(NULL));  // seed random

  for(i=0;i<N;i++)
    v[i] = rand()%7 + 3; // rand() va entre 0 y una constante que se llama RAND_MAX
  
  for(i=0;i<N;i++)
    printf("v[%d] = %15d\n", i, v[i]);
  
  return 0;
}
