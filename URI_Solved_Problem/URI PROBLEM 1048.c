#include<stdio.h>

int main()
{
    double N,P;
    char ch = '%';
    scanf("%lf", &N);

    if(N >= 0.00 && N < 400.01)
    {
      P = (N * 15.00) / 100.00;
      printf("Novo salario: %.2lf\n",N + P);
      printf("Reajuste ganho: %.2lf\n",P);
      printf("Em percentual: 15 %c\n",ch);
    }
    else if(N >= 400.01 && N < 800.01)
    {
      P = (N * 12.00) / 100.00;
      printf("Novo salario: %.2lf\n",N + P);
      printf("Reajuste ganho: %.2lf\n",P);
      printf("Em percentual: 12 %c\n",ch);
    }
    else if(N >= 800.01 && N < 1200.01)
    {
      P = (N * 10.00) / 100.00;
      printf("Novo salario: %.2lf\n",N + P);
      printf("Reajuste ganho: %.2lf\n",P);
      printf("Em percentual: 10 %c\n",ch);
    }
    else if(N >= 1200.01 && N <= 2000.00)
    {
      P = (N * 7.00) / 100.00;
      printf("Novo salario: %.2lf\n",N + P);
      printf("Reajuste ganho: %.2lf\n",P);
      printf("Em percentual: 7 %c\n",ch);
    }
    else if(N > 2000.00)
    {
      P = (N * 4.00) / 100.00;
      printf("Novo salario: %.2lf\n",N + P);
      printf("Reajuste ganho: %.2lf\n",P);
      printf("Em percentual: 4 %c\n",ch);
    }
    return 0;
}
