#include<stdio.h>

int main(){
  //  2^31 = 2,147,483,648
  char c;   //8 bits menos 1 para el signo me quedan 7: puedo contar hasta 2^7 - 1 = 255
  
  //asignación de un caracter
  c = 's';
  int j = 115;
  
  printf("el caracter c es %c\n", c);
  printf("el caracter c formato entero es %d\n", c);
  
  printf("el entero j es %d\n", j);
  printf("el entero j es %c\n", j);
  
  
  

  return 0;
}
