#include<stdio.h>
int var_global = 123;

void imprime_entero(int n);  // declarar el prototipo de la función
int suma_enteros(int i, int j);

void cambia_i(int i){
    i = i + 1;
}
int main(){
//    imprime_entero( suma_enteros(10, 11));       
    int i = 1;
    cambia_i(1);
    printf("i = %d\n", i);
    
    if(i==1){
        int j = 3;
        printf("j = %d\n", j);
   
    }
    //j = 4;   no me deja!
    
    for(int k;k<4;k++){
        printf("%d\n", k);
    }
    
    k = 2;  // tampoco me deja!!!
    return 0;
}


int suma_enteros(int i, int j){

    int aux;
    aux = i + j;

    return aux;
}

void imprime_entero(int n){

    printf("el entero es %d\n", n);

}
