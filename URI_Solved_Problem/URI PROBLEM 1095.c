#include<stdio.h>

int main()
{
    int I,J;

    for(J=60,I=1; J>=0; J=J-5,I=I+3)
    {
        printf("I=%d J=%d\n",I,J);
    }
    return 0;
}
