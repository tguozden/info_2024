#include<stdio.h>

int main(){
  int n;
  float a;
  a = 1.3;
  n = 1.3;
  
  printf("n = %d\na = %f\n", n, a);
  printf("ingresá otro valor para n:");
  scanf("%d", &n);
  printf("ingresá otro valor para a:");
  scanf("%f", &a);

  printf("n = %d\na = %f\n", n, a);
  
  return 0;
}
