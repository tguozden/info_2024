#include<stdio.h>



int main(){

   float  a = 1.0/3;
   double b = 1.0/3;

   printf("a = %0.20f\n", a);
   printf("b = %0.20f\n\n", b);   
   
   printf("a ocupa %ld bytes\n", sizeof(a));
   printf("b ocupa %ld bytes\n", sizeof(b));

   return 0;
}

