#include<stdio.h>

int main()
{
    int N[10];
    int I,V,X;
    scanf("%d",&V);
    X = V;

    for(I=0; I<10; I++)
    {
      printf("N[%d] = %d\n",I,X);
      X = X*2;
    }

    return 0;
}

