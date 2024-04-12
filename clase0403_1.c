#include<stdio.h>
#include<math.h>


int main(){

  int i;
  double x = -1.8;
  
  printf("x = %f\n", x);
  
  printf("x redondeado a entero es %d\n", (int)round(x));
  
  i = x;
  
  printf("i = %d\n", i);
  
  printf("floor(2.34) = %f\n", floor(2.34));
  printf("ceil(2.34) = %f\n", ceil(2.34));


printf("floor(-2.34) = %f\n", floor(-2.34));
  printf("ceil(-2.34) = %f\n", ceil(-2.34));

  
  
 
  return 0;
}
