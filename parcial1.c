#include<stdio.h>
#include<string.h>

int main(){
char palabra[100];
scanf("%s", palabra);
int i = strlen(palabra);
do
{
i = i - 1;
printf("%c", palabra[i]);
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
