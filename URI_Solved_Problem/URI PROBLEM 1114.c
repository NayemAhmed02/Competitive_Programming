#include<stdio.h>

int main()
{
    int N;

    for( ; ; )
    {
        scanf("%d",&N);
        if(N == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }

    }
    return 0;
}
