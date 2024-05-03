#include<stdio.h>

int main(){

    int i = 0;
    char *c;

    printf("int tiene %ld bytes\n", sizeof(int));
    printf("char tiene %ld bytes\n", sizeof(char));

    c = (char*) &i;

    for(i=1;i<100000000;i*=4){
        //printf("i = %d; *c = %d\n", i, *c);  //*c==c[0]
        printf("%10d: %3d %3d %3d %3d\n",i , c[0], c[1], c[2], c[3]);
    }



    return 0;
}
