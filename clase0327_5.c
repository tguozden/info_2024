#include<stdio.h>



int main(){
  
  char c;
  
  printf("char tiene %ld bytes\n\n", sizeof(char));
    printf("short tiene %ld bytes\n\n", sizeof(short));
      printf("int tiene %ld bytes\n\n", sizeof(int));

      printf("long tiene %ld bytes\n\n", sizeof(long));


  
  do{
    scanf(" %c", &c);
//    c = getchar();
//    getchar();
    
    printf("c = %c, valor numérico = %d\n",c ,c);
  if(c>=65&&c<=90) printf("cambio %c a %c\n\n", c, c+32);
  if(c>=97&&c<=122) printf("cambio %c a %c\n\n", c, c-32);
  
  }while((c>=65&&c<=90) || (c>=97&&c<=122));
  
  return 0;
}
