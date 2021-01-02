#include<stdio.h>

int main()
{
    int I,J,K;

    for(I=1; I<=10; I=I+2)
    {
        for(J=7; J>=5; J--)
        {
            printf("I=%d J=%d\n",I,J);
        }
    }
}
