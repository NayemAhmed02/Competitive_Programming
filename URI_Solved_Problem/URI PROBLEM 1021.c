#include<stdio.h>

int main()
{
    double N;
    int T;
    scanf("%lf",&N);
    printf("NOTAS:\n");

    if(N >= 100.00)
    {
        T = N/100.00;
        N = N - (T*100.00);
        printf("%d nota(s) de R$ 100.00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 100.00\n");
    }
    if(N >= 50.00)
    {
        T = N/50.00;
        N = N - (T*50.00);
        printf("%d nota(s) de R$ 50.00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 50.00\n");
    }

    if(N >= 20.00)
    {
        T = N/20.00;
       N = N - (T*20.00);
        printf("%d nota(s) de R$ 20.00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 20.00\n");
    }
     if(N >= 10.00)
    {
        T = N/10.00;
       N = N - (T*10.00);
        printf("%d nota(s) de R$ 10.00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 10.00\n");
    }
     if(N >= 5.00)
    {
        T = N/5.00;
        N = N - (T*5.00);
        printf("%d nota(s) de R$ 5.00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 5.00\n");
    }
     if(N >= 2.00)
    {
        T = N/2.00;
        N = N - (T*2.00);
        printf("%d nota(s) de R$ 2.00\n",T);
    }
    else
    {
       printf("0 nota(s) de R$ 2.00\n");
    }
    printf("MOEDAS:\n");

    if (N >= 1.00)
    {
        T = N/1.00;
        N = N - (T*1.00);
        printf("%d moeda(s) de R$ 1.00\n",T);
    }
    else
    {
       printf("0 moeda(s) de R$ 1.00\n");
    }
      if (N >= 0.50)
    {
        T = N/0.50;
        N = N - (T*0.50);
        printf("%d moeda(s) de R$ 0.50\n",T);
    }
    else
    {
       printf("0 moeda(s) de R$ 0.50\n");
    }
      if (N >= 0.25)
    {
        T = N/0.25;
       N = N - (T*0.25);
        printf("%d moeda(s) de R$ 0.25\n",T);
    }
    else
    {
       printf("0 moeda(s) de R$ 0.25\n",T);
    }
      if (N >= 0.10)
    {
        T = N/0.10;
        N = N - (T*0.10);
        printf("%d moeda(s) de R$ 0.10\n",T);
    }
    else
    {
      printf("0 moeda(s) de R$ 0.10\n");
    }
      if (N >= 0.05)
    {
        T = N/0.05;
        N = N - (T*0.05);
       printf("%d moeda(s) de R$ 0.05\n",T);
    }
    else
    {
       printf("0 moeda(s) de R$ 0.05\n");
    }
      if (N >= 0.01)
    {
        T = N/0.01;
        N = N - (T*0.01);
       printf("%d moeda(s) de R$ 0.01\n",T);
    }
    else
    {
       printf("0 moeda(s) de R$ 0.01\n");
    }
    return 0;
}

