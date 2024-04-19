#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
//    char vocales[5] = {'a', 'e', 'i', 'o', 'u' }; // esto no es una cadena de caracteres
    int n;
    char vocales[100] = "aeiou";
    
    srand(clock());
    n = rand()%5;
    
    printf("%c\n", vocales[n]);
    

    
    
    return 0;
}
