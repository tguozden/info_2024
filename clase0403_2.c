#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<limits.h>


int main(){
  printf("1/3=%.20f\n",1./3);
  printf(" sqrt(2)=%.20f\n",sqrt(2));
  printf("fsqrt(2)=%.20f\n",sqrtf(2));
  
  printf("fabs(-1/3)=%.20f\n",fabs(-1./3));
  printf("fabsf(-1/3)=%.20f\n",fabsf(-1./3));
  
  printf("abs(-23) = %d\n",abs(-23));
  
  printf("int máximo = %d\n",INT_MAX);
  printf("int mínimo = %d\n",INT_MIN);
  printf("char máximo = %d\n",CHAR_MAX);
  printf("char mínimo = %d\n",CHAR_MIN);
  
  printf("uchar máximo = %d\n",UCHAR_MAX);
  printf("uchar mínimo = %d\n",UCHAR_MIN);
  
  
  
  
 
  return 0;
}
