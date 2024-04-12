#include<stdio.h>
#include<math.h>


int main(){

  int i;
  double x;
  
  x = 0.;
  for(i=0;i<100;i++){
    printf("%3.1f %3.1f\n", x, sin(x));
    x += 0.07;
  }

  
  
 
  return 0;
}
