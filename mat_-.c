#include<stdio.h>

int imprime_mat(int m[2][2]){


   for(int i=0;i<2;i++){
      for(int j=0;j<2;j++)
         printf("%d ",m[i][j]);
      printf("\n");
   }

   return 0;
}

int main(){

    int m[2][2] = {{1,2},{3}};
    int v[2][2]={{0}};
    int ***n;

    int a=1;
    int b=2;

    &a=b;

    imprime_mat(m);

    imprime_mat(v);

    printf("\n-%d-\n",*(*m+1));

    printf("sizeof %ld\n",sizeof(v));

    printf("sizeof %ld\n",sizeof(int*[2]));
    printf("sizeof %ld\n",sizeof(int));

    printf("sizeof int* %ld\n",sizeof(int*));
    printf("sizeof char* %ld\n",sizeof(char*));
    printf("sizeof char* %ld\n",sizeof(double*));

    return 0;
}
