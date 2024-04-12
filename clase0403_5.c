#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

int main(){
  char c = 'B';
  printf("%c\n", toupper(c));
  printf("%c\n", c+32);
  
  char numero[] = "1.123";
  
  printf("el valor es %f\n", atof(numero));
  printf("el valor es %d\n", atoi(numero));
  



  
  
  
 
  return 0;
}
