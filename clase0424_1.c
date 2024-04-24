#include<stdio.h>

void cambia_i(int* punt_i){
    *punt_i = *punt_i + 1;
}
void otra_cambia_i(int* punt_i){
    punt_i[0] = punt_i[0] + 1;
}
int main(){
//    imprime_entero( suma_enteros(10, 11));       
    int i = 1;
    otra_cambia_i(&i);
    printf("i = %d\n", i);
    return 0;
}

