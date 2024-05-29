#include<stdio.h>

void cambia_valor(int *n){
   *n = 1;   // n[0] = 1;
}

int main(){
   
   int n = 0;
   
   cambia_valor(&n);
    
   printf("n = %d\n",n);
   return 0;

}
