#include<stdio.h>

int main()
{
    float N,I=0,S=0;

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
            break;
        }
    }
    return 0;
}
