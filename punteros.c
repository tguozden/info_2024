
#include<stdio.h>
int bina(int p, int n){
    int i;
    int b = 1;
    for (i=0;i<n;i++){
        if(p & b) printf("1");
        else printf("0");
        //b *= 2;
        b = b << 1;
    }
    printf("\n");
}

int main(){
   int x = 1; // -2147483648;
   char *p;
   p= (char*) &x;

   int i;


   for(i=0;i<32;i++){
        bina(x,32);
        bina(p[0],8);
        bina(p[1],8);
        bina(p[2],8);
        bina(p[3],8);


        printf("hit %d\n", x);
        getchar();
        x*=2;

        //bina(p[0],1);bina(p[1],1);bina(p[2],1);bina(p[3],1);
   }
return 0;
}
