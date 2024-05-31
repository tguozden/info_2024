// segundo parcial 

#include<stdio.h>

int cuenta_letra(char letra, char *cadena){
   int ncont = 0;
   int i = 0;
   
   while(cadena[i] != '\0' ){
      if(cadena[i] == letra) ncont++;
      i++;
   }

   return ncont;
}

int cuenta_letra_piola(char letra, char *cadena){
   int ncont = 0;
  
   while(*cadena != '\0' ){
      if(cadena[i] == letra) ncont++;
      cadena++;
   }

   return ncont;
}


int main(int argc, char *argv[]){

    printf("la cadena %s tiene %d letras a\n", argv[1], cuenta_letra('a', argv[1]));
    
    return 0;
}

