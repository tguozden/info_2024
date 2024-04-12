#include<stdio.h>

int main(){
  
  int i;
  int i1, i2;

  printf("ingrese el extremo inferior\n");
  scanf("%d", &i1);
  printf("ingrese el extremo superior\n");
  scanf("%d", &i2);
  
  printf("\n\n la lista es: ");
  for(i=i1;i<=i2;i++){
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}
