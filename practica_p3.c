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

int indice_temp_max(meteo_t estaciones[], int n){
   float tmax = estaciones[0].temp;
   int imax = 0;

   for(int i=0; i<n; i++)
      if(estaciones[i].temp > tmax){
         tmax = estaciones[i].temp;
         imax = i;
      }
   return imax;
}

void temp_max(meteo_t estaciones[], int n){
   int imax = indice_temp_max(estaciones, n);
   imprime_meteo(estaciones[imax]);

}


float tmedia(meteo_t estaciones[], int n){
   float tmedia = 0;
   for(int i=0; i<n; i++)
      tmedia += estaciones[i].temp;
   tmedia /= n;
   return tmedia;
}

int busca_sitio(char cadena[], meteo_t estaciones[], int n);

int main(int argc, char *argv[]){
   meteo_t estaciones[4] =
             {{1.1, 1234 , "bariloche"    },
              {2  , 0 , "pto blest"    },
              {6  , 0 , "pto panuelo"    },
              {0.5, 10, "refugio jacov"}};

   //imprime_todas(estaciones,3);
   //int imax = indice_temp_max(estaciones, 3);
   //imprime_meteo(estaciones[imax]);
   //printf("tmedia = %f\n", tmedia(estaciones, 3));

   temp_max(estaciones, 4);
   return 0;
}
int busca_sitio(char cadena[], meteo_t estaciones[], int n){
   int isitio = -1;
   int imatch;

   for(int i =0; i<n; i++){
      imatch=0;
      for(int j=0;cadena[j]!='\0';j++)
         if(estaciones[i].sitio[j] != cadena[j])
            imatch++;
      if(imatch == 0)
         isitio = i;
   }


   return isitio;
}
