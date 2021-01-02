#include<stdio.h>

int main()
{
    int N,X,Y,I;
    int J,T;
    scanf("%d",&N);

    for(I=0; I<N; I++)
    {
        T = 0;
        scanf("%d %d",&X,&Y);
        if(X<Y)
        {
            for(J=X+1; J<Y; J++)
            {
                if(J % 2 != 0)
                {
                   T=T+J;
                }
            }
            printf("%d\n",T);
        }
        else if(X>Y)
        {
            for(J=X-1; J>Y; J--)
            {
                if(J % 2 != 0)
                {
                   T=T+J;
                }
            }
            printf("%d\n",T);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
