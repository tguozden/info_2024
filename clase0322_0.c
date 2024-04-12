#include<stdio.h>

int main(){

  int i;
  
  char a,b,c;
  char s[100];
  scanf(" %c", &a);
  printf("%c\n", a);

  scanf(" %c", &b);
  printf("%c\n", b);

  scanf(" %c", &c);
  printf("%c\n", c);
  
  scanf(" %[^\n]", s);
  printf("%s\n", s);
  
  return 0;
}
