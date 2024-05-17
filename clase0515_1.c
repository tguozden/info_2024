#include <stdio.h>
#include <ctype.h>
#define N 100

int esnumero(char cadena[]){
    int esnum = 1; // supongo que sí es número
//    printf("%s\n\n", cadena);
    for (int i=0;cadena[i]!='\0'; i++)
       if (isdigit(cadena[i]) == 0)
           esnum = 0;
     
    return esnum;
}

int main(int arc, char *argv[])
{
    
    if(esnumero(argv[1]))
       printf ("ud ingresó un número \n");
    else
       printf ("ud no ingresó un número \n");

    return 0;

}
