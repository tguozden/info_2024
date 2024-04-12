#include<stdio.h>

#define N 20

int main(){
  
  char c[N] = "hola que tal";
  int i;

  printf("%s\n", c);
  
  for(i=0;i<N;i++)
    printf("%d\n", c[i]);
  
  return 0;
}
