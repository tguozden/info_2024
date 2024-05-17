#include <stdio.h>
#include <ctype.h>
#define N 100

char *lee_cadena(char *buffer){
   scanf("%s", buffer);
   return buffer;
}

int main()
{
    char cadena[N];
    
    
    printf("ingresó:\n%s\n", lee_cadena(cadena));

    return 0;

}
