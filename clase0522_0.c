#include<stdio.h>

typedef float flotante;


int main(){
   int n = 1;
   flotante x = 0;
   
   struct punto {
      int x;
      int y;
   }  punto_a; 
   
   punto_a.x = 1;
   punto_a.y = 2;
   
   printf("punto_a = (%d, %d)\n", punto_a.x, punto_a.y);


   return 0;
}
