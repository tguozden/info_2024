#include<stdio.h>

typedef struct{
   float temp;
   float lluvia;
   char sitio[100];
} meteo_t;

void imprime_meteo(meteo_t estacion){
   printf("estación: %20s\n", estacion.sitio);
   printf("temp      %6.3f\n", estacion.temp);
   printf("lluvia    %6.3f\n",   estacion.lluvia);
   printf("\n");
}
void imprime_todas(meteo_t estaciones[], int n){
   
   for(int i=0;i<n;i++){ 
      printf("sitio %d\n", i);
      imprime_meteo(estaciones[i]);
   }
}

int main(){
   meteo_t estaciones[3] =     
             {{1.1, 0 , "bariloche"    },
              {2  , 0 , "pto blest"    },
              {0.5, 10, "refugio jacov"}};
   imprime_todas(estaciones,3);

   return 0;
}
