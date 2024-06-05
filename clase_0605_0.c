/*
   10000000  1 2^0
   01000000  2 2^1
   00100000  4 2^2
   00010000  8 2^3
   00001000 16 2^4
*/

#include<stdio.h>

void imprime_binario(int k, int ndig){
   int b = 1;

   for(int i =0;i<ndig;i++){
      if(k & b) printf("1");
      else      printf("0");
      b = b*2;
   }
   printf("\n");
}

int main(){

   int n = 1;  // sizeof(int) = 4

   char *p;
   p = (char *) &n;

   for(int i = 0;i<32;i++){
      printf("n = %d\n", n);
      imprime_binario(n, 32);
      printf("p[0] ");
      imprime_binario(p[0], 8);
      printf("p[1] ");
      imprime_binario(p[1], 8);
      printf("p[2] ");
      imprime_binario(p[2], 8);
      printf("p[3] ");
      imprime_binario(p[3], 8);

      n = n * 2;
      getchar();
   }


   // 1 byte son 8 bits

}
