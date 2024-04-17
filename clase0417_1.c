#include<stdio.h>


int mi_funcion(int i); //prototipo


int main(){


   int j = 321;
   
   printf("el valor es %d\n", mi_funcion(j));  
   j
   printf("j es %d\n", j);

   return 0;
}


int mi_funcion(int i){

   i = i + 80;
   
   return i;
}

