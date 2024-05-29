// segundo parcial 

#include<stdio.h>
#define N 4
#define M 3

int permuta_fila(int mat[N][M], int i, int j){
   
/*
caso matriz N=4 filas y M=3 columnas

columnas  ----->0 1 2

fila 0		a b c
fila 1		d e f
fila 2		g h i
fila 3		j k l
*/
   int aux;
   for(int k=0;k<M;k++){
//   swap(&mat[i][k], &mat[j][k]);
      aux = mat[i][k];
      mat[i][k] = mat[j][k];
      mat[j][k] = aux;
   }
}


