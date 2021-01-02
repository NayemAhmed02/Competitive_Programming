#include<stdio.h>

int main()
{
    int N,I;
    scanf("%d",&N);

    for(I=2; I<10000; I=I+N)
    {
        printf("%d\n",I);
    }
    return 0;
}
