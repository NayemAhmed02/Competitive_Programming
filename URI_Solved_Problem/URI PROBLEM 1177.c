#include<stdio.h>

int main()
{
    int N[1000];
    int T,I,X=0;
    scanf("%d",&T);

    for(I=0; I<1000; I++)
    {
        printf("N[%d] = %d\n",I,X);
        X++;
        if(X == T)
            X = 0;
    }
    return 0;
}
