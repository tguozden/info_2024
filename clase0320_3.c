#include<stdio.h>

int main(){
  
  int i;
  char c = 'A';
  
  printf("el caracter %c tiene código ASCII %d\n", c, c);
  
  for(i=65;i<255;i=i+1)
      printf("el caracter %c tiene código ASCII %d\n", i, i);


  

  return 0;
}
