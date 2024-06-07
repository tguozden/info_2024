#include<stdio.h>

int main(){
   int vec [5] = {1, 2, 3, 5, 7};
 
   int *p;
   
   char *pc;
   
   p = vec;
//   p++;
//   printf("%d\n", *p);
  
//   for(int i =0;i<5;i++) printf("%d\n", p[i]);
//   vec[3] = 123;
//   for(int i =0;i<5;i++) printf("%d\n", p[i]);
   
   pc = (char*)vec;
   for(int i =0;i<20;i++) printf("%d\n", pc[i]);

   return 0;
}
