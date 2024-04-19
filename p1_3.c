#include<stdio.h>
#include<string.h>

int main(){
    char palabra[100];
    scanf("%s", palabra); //"celular"
                          // 1234567
                          // 0123456
    int i = strlen(palabra);
    do      ///   r-a-l-u-l-e-c.
    {
        i = i - 1;
        printf("%c", palabra[i]);  // palabra[6] es r
        if (i==0)
        {
            printf(".");
        }
        else
        {
            printf("-");
        }
    }while(i > 0);
    printf("\n");
    return 0;
}
