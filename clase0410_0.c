#include<stdio.h>

int main(){

int vec[5];
int mat[4][4];
int mat2[2][2] = {{1, 2}, {3, 4}};

int i, j;
printf("mat2: \n");
for(i=0;i<2;i++){  //i: fila
  for(j=0;j<2;j++)  // j: columna
    printf("%d ", mat2[i][j]);
  printf("\n");
}
printf("\n\n");


for(i=0;i<4;i++)    //i va a ser el índice de filas
  for(j=0;j<4;j++)  // j: columna
    mat[i][j] = i+j;
    

for(i=0;i<4;i++){  //i: fila
  for(j=0;j<4;j++)  // j: columna
    printf("%d ", mat[i][j]);
  printf("\n");
}
    

  



return 0;
}
