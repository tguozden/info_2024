#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct{
    int valor;
    int palo;
} carta_t;

#define N 40

void arma_mazo(carta_t cartas[N]){
    int vcartas[] = {1, 2, 3, 4, 5, 6, 7,10, 11, 12};
    int icarta=0;
    for(int ipalo = 1; ipalo<5;ipalo++){
        for(int jvalor=0; jvalor<10; jvalor++){
            cartas[icarta].palo = ipalo;
            cartas[icarta].valor = vcartas[jvalor];
            icarta++;
        }
    }

}
void mezcla(carta_t cartas[N], int n){
    int n1 = rand()%40;
    int n2 = rand()%40;

    carta_t aux;
    for(int i=0;i<n;i++){
        aux = cartas[n1];
        cartas[n1] = cartas[n2];
        cartas[n2] = aux;
    }
}
void reparte(carta_t cartas[N], carta_t mano1[3], carta_t mano2[3]){
    int i = 39; //considero que 39 es la última
                //podría considerarse que 0 es la última sin problema
    for(int j = 0;j<3;j++){  //doy 3 veces a cada uno:
        mano1[j] = cartas[i];
        i--;// cada vez que doy corro la carta que elijo del mazo
        mano2[j] = cartas[i--];
        i--;
    }
}
void corta(carta_t cartas[N]){
    int n1 = rand()%40;
    printf("cortó en %d\n", n1);
    carta_t aux[N];  //mazo auxiliar

    for(int i=0; i<N;i++)
        aux[i] = cartas[i];  // copio el mazo
    //luego reasigno las cartas al mazo:
    for(int i=0; i<n1;i++)
        cartas[i + N-n1] = aux[i];  //la parte que queda abajo del corte es más fácil:
                                //son n1 cartas: aux[0, 1, 2, ....., n1-1 ]
                                //que van a ir arriba en cartas[N-n1, ....., N-1]
    for(int i=0; i<N-n1;i++)
        cartas[i] = aux[i + n1];  //lo que queda arriba del corte
                             // son N-n1 cartas: aux[n1, ..., N-1]
                             // van a ir abajo: cartas[0, ...., N-n1-1]

}
