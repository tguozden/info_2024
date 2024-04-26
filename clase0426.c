#include<stdio.h>
#define N 4
#define M 3


int main(){

    int mat_f[N][M];
    int mat_c[N][M];
    int mat[N][M];        
    
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            mat_f[i][j]=i;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            printf("%d ", mat_f[i][j]);
        printf("\n");
    }            

    getchar();
    
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            mat_c[i][j]=j;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            printf("%d ", mat_c[i][j]);
        printf("\n");
    }
    
    getchar();
    
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            mat[i][j] = mat_f[i][j] + mat_c[i][j];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    
    
    
    
    
    


    return 0;
}
