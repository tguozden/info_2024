#include<stdio.h>

int main(){

  int i;
  i = 3;
  switch(i){
    case 0:
      printf("entro en i cero\n");
      break;
    
    case 1:
      printf("es uno\n");
      break;
    
    default:
      printf("ninguna de las anteriores\n");
    break;
  }
  return 0;
}
