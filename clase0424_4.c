/*

funcion sprintf


*/
#include<stdio.h>


int main(){

    char cadena[100];

    for(int i = 0;i<4;i++){
       sprintf(cadena ,"%d%%2 = %d\n", i, i%2);
       printf("%s", cadena);
//       puts(cadena);
    }
    
    
    return 0;
}

