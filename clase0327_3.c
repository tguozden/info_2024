#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

int main(){
  
  char c[N] = "hola";
  int i;

  
  srand(time(NULL));  // seed random

/*  for(i=65;i<91;i++)
    printf("%d %c\n",i ,i);
  for(i=97;i<123;i++)
    printf("%d %c\n",i ,i);
*/
  for(i=0;i<N;i++)
    c[i] = rand()%(122-97+1) + 97;
  
  for(i=0;i<N;i++)
   printf("%c", c[i]);
  printf("\n"); 
  
  return 0;
}
