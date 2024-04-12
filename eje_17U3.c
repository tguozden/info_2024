#include<stdio.h>
#include<stdlib.h> // rand srand
#include<time.h>

int main(){
  int vnum[10];
  int vletras[10];
  
  int i;
  srand(clock());
  for(i=0;i<10;i++){
    vnum[i]=rand()%10+1;
  }
  //A:65
  //B:66
  //..
  //Z=90
  // son 90 - 65 + 1 letras para sortear
  for(i=0;i<10;i++){
    vletras[i]=rand()%(90-65+1)+65;
  }
  
  for(i=0;i<10;i++)
    if(vnum[i]>5)
      printf("%2d %c\n",vnum[i], vletras[i]);
  
  
 return 0;
}
