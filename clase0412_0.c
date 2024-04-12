#include<stdio.h>

int mi_impresora(){
   printf("hola mundo 2.0\n");
   return 0;
}

void solo_imprime(){
   printf("hola vacío\n");
}

int multiplica(int n1, int n2){
   return n1*n2;
}

void incrementa_en_uno(int* j){
   *j = *j + 1;
}

void incrementa_en_dos(int j[]){
   j[0] = j[0] + 2;
}

int main(){
//   printf("hola mundo\n");
//   int n;
//   n = mi_impresora();
//   printf("n = %d\n", n);
//   solo_imprime();
//   printf("2 * 3 = %d\n", multiplica(2, 3));
   int n = 0;
   incrementa_en_dos(&n);
   printf("n = %d\n", n);
   
   return 0;
}
