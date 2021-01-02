#include<stdio.h>

int main()
{
    int I,J,K=0;

    for(I=1; I<=10; I=I+2)
    {
        for(J=K+7; J>=K+5; J--)
        {
            printf("I=%d J=%d\n",I,J);
        }
        K = K+2;
    }
    return 0;
}

