#include"barajas.h"

void imprime_cartas(carta_t cartas[], int n){
    for(int i =0;i<n;i++)
        printf("%2d ", cartas[i].palo);
    printf("\n");
    for(int i =0;i<n;i++)
        printf("%2d ", cartas[i].valor);
    printf("\n\n");
}
int main()
{
    srand(clock());
    carta_t cartas[N];
    arma_mazo(cartas);
    imprime_cartas(cartas, N);
    corta(cartas);
    imprime_cartas(cartas, N);


    return 0;
}
