#include<stdio.h>

int main()
{
    int X,Y,I,S = 0;
    scanf("%d %d",&X,&Y);

    if(X >= Y)
    {
        for(I=Y+1; I<X; I++)
        {
            if(I % 2 != 0)
            {
                S = S+I;
            }
        }
    }
    else
    {
        for(I=X+1; I<Y; I++)
        {
            if(I % 2 != 0)
            {
                S = S+I;
            }
        }
    }

    printf("%d\n",S);

    return 0;
}
