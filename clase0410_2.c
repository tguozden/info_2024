#include<stdio.h>

int main(){
  int mat[2][2];
  int i, j;
  
  
  for(i=0;i<2;i++)
    for(j=0;j<2;j++){
      printf("ingrese la comp. de la fila %d y columna %d: ", i, j);
      scanf("%d", &mat[i][j]);
      }
  
  
  printf("%d %d\n", mat[0][0], mat[0][1]);
  printf("%d %d\n", mat[1][0], mat[1][1]);
  
  
  return 0;
}
    

