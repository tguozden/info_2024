#include<stdio.h>

int main(){
  
  int i;
  int n;
  int total = 0;
  
  for(i=0;i<4;i=i+1){
    printf("ingrese un entero: ");
    scanf("%d", &n);
    printf("ud ingresó %d\n\n", n);  
  
    total = total + n;
  }
  
  printf("total = %d\n", total);
  printf("el promedio es %f\n", (float)total/4);


  return 0;
}
