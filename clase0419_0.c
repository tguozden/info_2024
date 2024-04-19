#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char sortea_vocal(){
    int n;
    char vocal[5] = {'a', 'e', 'i', 'o', 'u' };
    n = rand()%5;

    return vocal[n];
}


int main(){
    srand(clock());
    
    for(int i=0;i<100;i++){
       printf("%c", sortea_vocal());

    }
    
    
    
    return 0;
}
