#include<stdio.h>

int main()
{
    int N,I;

    printf("The Number Is : ");
    scanf("%d", &N);

    for(I=2; I<=N/2; I++)
    {
        if(N % I == 0)
        {
            printf(" \n \nThis Is Not A Perfect Number .\n");
            break;
        }
        else
        {
            printf(" \n \nThis Is A Perfect Number .\n");
            break;
        }
    }
    if(N == 1 || N == 2 || N == 3)
    {
        printf(" \n \nThis Is A Perfect Number .\n");
    }

    return 0;
}
