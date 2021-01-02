#include<stdio.h>

int main()
{
    int N,I;
    float A,B,C,T;

    scanf("%d",&N);

    for(I=0; I<N; I++)
    {
        scanf("%f %f %f",&A,&B,&C);
        T = (A*2) + (B*3) + (C*5);
        printf("%.1f\n",T/10);
    }
    return 0;
}
