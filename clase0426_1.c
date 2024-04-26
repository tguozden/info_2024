#include<stdio.h>
#define N 4
#define M 3

void inimat_i(int mat_f[N][M], int s){
   for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            if(s == 1) mat_f[i][j]=i;
            else if(s == 2) mat_f[i][j]=j;
                 else mat_f[i][j]=0;
}

void imprime_mat(int mat[N][M]){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }            
}

void suma_mat(int mat[N][M], int mat_f[N][M], int mat_c[N][M]){
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            mat[i][j] = mat_f[i][j] + mat_c[i][j];

}

int main(){

    int mat_f[N][M];
    int mat_c[N][M];
    int mat[N][M];        
    
    inimat_i(mat_f, 1);
    imprime_mat(mat_f);

    getchar();

    inimat_i(mat_c, 1);
    imprime_mat(mat_c);

    getchar();
    
    suma_mat(mat, mat_f, mat_c);
    imprime_mat(mat);
    
    return 0;
}
