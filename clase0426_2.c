#include<stdio.h>

void imprime_cadena(char cadena[]){
    printf("%s\n", cadena);
}

int main(){
    char cadena[100];
    
    sprintf(cadena, "esto es una cadena\n escrita con sprintf\n hoy es %d", 26);

    
    
    imprime_cadena(cadena);

    return 0;
}
