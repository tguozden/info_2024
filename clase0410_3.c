#include<stdio.h>

int main(){
  int mat[2][2];
  int *vec;
  
  mat[0][0] = 1;
  mat[0][1] = 2;
  mat[1][0] = 3;
  mat[1][1] = 4;
  

  
  printf("%d %d\n", mat[0][0], mat[0][1]);
  printf("%d %d\n\n", mat[1][0], mat[1][1]);
  
  vec = &mat[0][0];
  for(int i=0;i<4;i++)
    printf("%d\n", vec[i]);
  return 0;
}
    

