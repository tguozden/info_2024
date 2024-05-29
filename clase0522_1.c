#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef float flotante;

typedef struct {
      int x;
      int y;
   } punto_t;

punto_t punto_random(){
    punto_t P;
    P.x = rand()%10;
    P.y = rand()%10;
    return P;
}    

int main(){
   int n = 1;
   flotante x = 0;
   srand(clock());
   
   punto_t  punto_a; 
   
   punto_a.x = 1;
   punto_a.y = 2;
   printf("punto_a = (%d, %d)\n", punto_a.x, punto_a.y);
   
   punto_a = punto_random();
   printf("punto_a = (%d, %d)\n", punto_a.x, punto_a.y);


   return 0;
}
