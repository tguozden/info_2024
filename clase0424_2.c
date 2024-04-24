#include<stdio.h>


void imprime_vector(int v[], int n){
    for(int i = 0;i<n;i++) printf("%d ", v[i]);
        printf("\n");
}

void no_anda(int* v){
    
    v++;

}


int main(){
//    imprime_entero( suma_enteros(10, 11));       
    int v[4] = {1, 2, 3, 4};
    int vv[5] = {-2, -1, 0, 1, 2};
    
      
    imprime_vector(v, 4);
    
    imprime_vector(vv, 3);
    
    no_anda(v);


    return 0;
}

