#include<stdio.h>

int main()
{
    int M,N,I,S;

    for( ; ; )
    {
        scanf("%d %d",&M,&N);
        S = 0;
        if(M <=0 || N <= 0)
        {
            break;
        }
        if(M >= N)
        {
           for(I=N; I<=M; I++)
           {
               S = S+I;
               printf("%d ",I);
           }
           printf("Sum=%d\n",S);
        }
        else
        {
           for(I=M; I<=N; I++)
           {
               S = S+I;
               printf("%d ",I);
           }
           printf("Sum=%d\n",S);
        }
    }
    return 0;
}
