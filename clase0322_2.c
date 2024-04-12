#include<stdio.h>

int main(){

  int i;
  for(i=0;i<4;i++) printf("for! i = %d\n",i);

  i=0;
  while(i<4){
    printf("while!!  i = %d\n",i);
    i = i + 1;  // equivale a i++
    
  }
  
  i=0;
  do{
    printf("do while!!  i = %d\n",i);    
    i = i + 1;
  }while(i<4);
  
  

  return 0;
}
