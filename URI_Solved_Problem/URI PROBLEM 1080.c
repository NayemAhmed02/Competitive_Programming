#include<stdio.h>

int main()
{
    int N,i,B=0,S;

    for(i=1; i<101; i++)
    {
        scanf("%d",&N);
        if(N > B)
        {
            B = N;
            S = i;

        }
    }
    printf("%d\n%d\n",B,S);

    return 0;
}
