#include<stdio.h>

int main(){

  int praton;
  int acum = 0;
  int nraton = 0;
  
  int pmin = 9999999;
  
  do{
    printf("ingrese el peso del ratón (0 para salir)\n");
    scanf("%d", &praton); 
    
    printf("peso ingresado = %d\n", praton);
    
    acum = acum + praton;  // se puede abreviar como acum+=praton
    if(praton) nraton++;
    
    if(praton && praton < pmin) pmin = praton;
  }while(praton);  //igual a while(praton != 0)
  
  printf("ud ingreso %d ratones\n", nraton);
  printf("peso promedio %f\n", (float)acum/nraton);
  printf("ratón más liviano pesa %d\n", pmin);

  return 0;
}
