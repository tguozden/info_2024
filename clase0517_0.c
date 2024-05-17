#include<stdio.h>

void encripta(char mensaje[]);
void desencripta(char mensaje[]);


int main(){
   char mensaje[]="esato anda\n increiblemente bien";
   
   encripta(mensaje);
   printf("%s\n", mensaje);
   desencripta(mensaje);
   printf("%s\n", mensaje);
   
   return 0;
}

void encripta(char *mensaje){
/*
mensaje[0] - > 'v'
mensaje[0]+1  -> 'w'  */
   for(int i=0;mensaje[i]!='\0';i++)
      mensaje[i]++;
}
void desencripta(char mensaje[]){
/*
mensaje[0] - > 'v'
mensaje[0]+1  -> 'w'  */
   for(int i=0;mensaje[i]!='\0';i++)
      mensaje[i]--;
}

