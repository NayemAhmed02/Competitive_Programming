#include<stdio.h>

int main()
{
    int N,T;
    scanf("%d",&N);
    printf("%d\n",N);

    if(N >= 100)
    {
        T = N/100;
        N = N % 100;
        printf("%d nota(s) de R$ 100,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 100,00\n");
    }
    if(N >= 50)
    {
        T = N/50;
        N = N % 50;
        printf("%d nota(s) de R$ 50,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 50,00\n");
    }

    if(N >= 20)
    {
        T = N/20;
        N = N % 20;
        printf("%d nota(s) de R$ 20,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 20,00\n");
    }
     if(N >= 10)
    {
        T = N/10;
        N = N % 10;
        printf("%d nota(s) de R$ 10,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 10,00\n");
    }
     if(N >= 5)
    {
        T = N/5;
        N = N % 5;
        printf("%d nota(s) de R$ 5,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 5,00\n");
    }
     if(N >= 2)
    {
        T = N/2;
        N = N % 2;
        printf("%d nota(s) de R$ 2,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 2,00\n");
    }
    if (N >= 1)
    {
        T = N/1;
        printf("%d nota(s) de R$ 1,00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 1,00\n");
    }
    return 0;
}
