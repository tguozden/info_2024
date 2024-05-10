#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

void inicializa(int v[], int n);
void imprime(int v[], int n);
void swap(int v[], int i, int j);
int ind_minimo(int v[], int n);
void ordena(int v[], int n);

int main(){
    int v[N];  // 1:_ 2:_ 3:_ 4:_ 5:_
    srand(time(0));
    inicializa(v, N);
    imprime(v, N);

    //printf("la comp %d del vec es: \n%d\n", 2, v[2]);
    //printf("la primera comp es: \n%d\n", *v);
    //printf("la tercera comp es: \n%d\n", *(v+2) );//*(v+2)==v[2]

    //swap(v, 1, 3);
    //imprime(v, N);
    //printf("el valor más chico está en el índ %d\n", ind_minimo(v, N));
    ordena(v, N);
    imprime(v, N);

    return 0;
}

void ordena(int v[], int n){
    imprime(v, n); // para mostarar

    int imin = ind_minimo(v, n);
    swap(v, imin, 0);

    imprime(v, n); // para mostrar
    getchar();     // para mostrar

    if(n > 2) ordena(&v[1], n-1);//&v[1]==v+1 | v[1]==*(v+1)

}

int ind_minimo(int v[], int n){
    int imin;
    int vmin;
    vmin = v[0];
    imin = 0;
    for(int i=1;i<n;i++)
        if(v[i] < vmin){
            vmin = v[i];
            imin = i;
        }
    return imin;
}

void swap(int v[], int i, int j){
    int aux;
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
void inicializa(int v[], int n){
    for(int i=0;i<n;i++)
//        v[i] = i*i+3;
        v[i] = rand()%100 + 1;
}

void imprime(int v[], int n){
    for(int i=0;i<n;i++)
        printf("%d ", v[i]);
    printf("\n\n");
}
