#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4
#define M 5
void imprime_mat(int mat[N][M]);
void inicializa_mat(int mat[N][M]);
int minimo_mat(int mat[N][M]);

int main(){
    int mat[4][5];

    srand(clock());
    inicializa_mat(mat);
    imprime_mat(mat);
    printf("la comp. más peque vale %d\n", minimo_mat(mat));
    return 0;
}
int minimo_mat(int mat[N][M]){
    int valor_min = 10;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            if(mat[i][j] < valor_min){
                valor_min = mat[i][j];
            }
    return valor_min;
}


void inicializa_mat(int mat[N][M]){
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            mat[i][j] = rand()%10;
}

void imprime_mat(int mat[N][M]){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
