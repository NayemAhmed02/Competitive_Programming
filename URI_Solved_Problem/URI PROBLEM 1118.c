#include<stdio.h>

int main()
{
    float N,I=0,S=0;
    int X;

    for( ; ; )
    {
        scanf("%f",&N);
        if(N < 0 || N > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            S = S+N;
            I++;
        }
        if(I == 2)
        {
            printf("media = %.2f\n",S/2);
            printf("novo calculo (1-sim 2-nao)\n");
            for( ; ; )
            {
            scanf("%d",&X);
            if(X < 1 || X > 2)
              {
                 printf("novo calculo (1-sim 2-nao)\n");
              }
              else
              {
                  break;
              }
            }
         if(X == 1)
        {
            S = 0;
            I = 0;
            continue;
        }
        else if(X == 2)
        {
            break;
        }
        }
    }
    return 0;
}

