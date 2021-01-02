#include<stdio.h>

int main()
{
    int N,I;
    scanf("%d",&N);

    for(I=1; I<11; I++)
    {
        printf("%d x %d = %d\n",I,N,I*N);
    }
    return 0;
}
