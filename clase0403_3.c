#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char s[] = "H O L A";
  char s2[20];

//  s2 = s;   // esto está mal

strcpy(s2, s);
                
printf("s2 es %s\n", s2);
//  scanf("%[^\n]", &s[0]);
//igual que scanf("%[^n]", s);  
/*  
  s[0]='H';
  s[1]='o';
  s[2]='L';
  s[3]='a';
  s[4]=0;//'\0';
*/

  printf("%s\n", s);
//  printf("s tiene %ld caracteres\n", strlen(s));
  printf("%d\n", tolower(s[0]));
  



  
  
  
 
  return 0;
}
