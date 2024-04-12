#include<stdio.h>

int main(){
  
  int i;
  int p_raton;
  
  int n_flacos = 0;
  int min;
  int max;

  for(i=0;i<3;i++){
    printf("peso ratón %d: ", i);
    scanf("%d", &p_raton);
    
    if(p_raton < 600)  n_flacos++;
  }
  printf("hay %d ratones flacos\n", n_flacos );
  return 0;
}
