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

void frecuencia_vocal(char *cadena, int frec[5] ){
    frec[0] = cuenta_letra('a', cadena);
    frec[1] = cuenta_letra('e', cadena);
    frec[2] = cuenta_letra('i', cadena);
    frec[3] = cuenta_letra('o', cadena);
    frec[4] = cuenta_letra('u', cadena);
}
/*void frecuencia_vocal(char *cadena, int frec[5] ){
    char vocal[100] = "aeiou";
    for(int i=0;i<5;i++)
       frec[i] = cuenta_letra(vocal[i], cadena);
}*/


int main(int argc, char *argv[]){

   int frec[5];
   frecuencia_vocal(argv[1], frec);
   for(int i=0;i<5;i++)
      printf("frec[%d] = %d\n", i, frec[i]);
       

    
     
   printf("la cadena %s tiene %d letras a\n", argv[1], cuenta_letra('a', argv[1]));
    
    
    
    
    
    
    return 0;
}

