#include<stdio.h>

int main(){
  int i, ni = 10;
  int j, nj = 20;
  int k;
  
  for(k=0;k<10;k++){
    
    for (i=0;i<ni;i++) printf(".");
    for (j=0;j<nj;j++) printf("*");
    for (i=0;i<ni;i++) printf(".");

    printf("\n");
    ni++;
    nj-=2;
  }
  return 0;
}
