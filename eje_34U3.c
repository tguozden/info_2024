#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 3
#define M 5


int main(){
  int mat[N][M];
  int i, j;
  int acum;
  
  srand(time(0));
  
  for(i=0;i<N;i++)
    for(j=0;j<M;j++)
       mat[i][j] = rand()%10;

  for(i=0;i<N;i++){
    for(j=0;j<M;j++)
       printf("%d ", mat[i][j]);
    printf("\n");
  }
  
  acum = 0;
  for(i=0;i<N;i++)
    for(j=0;j<M;j++)
       acum += mat[i][j];
  printf("la suma de todas las componentes es %d\n", acum);
 
  return 0;
}
    

