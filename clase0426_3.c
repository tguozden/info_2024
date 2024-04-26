#include<stdio.h>
#include<string.h>

void imprime_cadena(char cadena[]){
    printf("%s\n", cadena);
}

int main(){
    char cadena[100] = "hoy es ";
    
    strcat(cadena, "26");
    
    
    imprime_cadena(cadena);

    return 0;
}
