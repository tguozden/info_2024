#include<stdio.h>

int main(){
    unsigned int n = 1;
    
    printf("sizeof %ld\n", sizeof(int));
    char *c;
    
    c = (char*)&n;
    
    for(int i=0;i<32;i++){
        printf("%d %d %d %d\n", c[0], c[1], c[2], c[3]);
        n = n<<1;

    }
    


    return 0;
}
