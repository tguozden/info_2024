#include<stdio.h>

//funciones recursivas

void recursiva(int n){
    if (n>0){
        printf("%d ", n);
        recursiva(n-1);
    }
    
}

int factorial(int n){
    if(n > 0)
        return n*factorial(n - 1);
    else return 1;
}


int main(){
//    recursiva(4);
    printf("factorial de %d es %d\n", 4, factorial(4));
    return 0;
}
