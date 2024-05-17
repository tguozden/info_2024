#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

   printf("argc = %d\n", argc);
   for(int i=0;i<argc;i++)
      printf("argv[i] = %s\n", argv[i]);
   
   //if(isnum(argv[1]))
     // printf("usted ingresó un número\n");
   //else
     // printf("usted no ingresó un nro\n");
   printf("argv[1] en nros es %d\n", atoi(argv[1]));

   
   return 0;
}
