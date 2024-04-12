#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i=0, j=0;
    for(i=0;i<100;i++){
//        printf("%d ",j++);
        printf("\\\b");fflush(stdout);
        while((clock())%100000);
        printf("|\b");fflush(stdout);
        while((clock())%100000);
        printf("/\b");fflush(stdout);
        while((clock())%100000);
        printf("-\b");fflush(stdout);
        while((clock())%100000);
    }



    return 0;
}
