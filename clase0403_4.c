#include<stdio.h>
#include<string.h>

int main(){
  char s[100] = "H O L A";
  
  int i;

//  scanf("%[^\n]", s);
  
//  strlen
  i = 0;
  while(s[i]!='\0') i++;


  printf("i = %d\n", i);

  return 0;
}
