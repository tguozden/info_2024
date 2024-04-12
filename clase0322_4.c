#include<stdio.h>

int main(){
  float a = 1./3;
  double b = 1./3;
  printf("float 1/3 = %.20f\n", a);
  printf("double 1/3 = %.20f\n\n", b);

  printf("1/3 = %.20f\n", (float)1/3);

  return 0;
}
