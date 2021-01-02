#include<stdio.h>

int main()
{
    double A[10];
    int I;

    for(I=0; I<10; I++)
      scanf("%lf",&A[I]);
    for(I=0; I<10; I++)
    {
        if(A[I]<=10)
            printf("A[%d] = %.1lf\n",I,A[I]);
    }
    return 0;
}


