#include<stdio.h>

int main()
{
    double N,P,M,B;
    scanf("%lf", &N);

    if(N <= 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        P = N - 2000.00;

        if(P <= 1000.00)
        {
            printf("R$ %.2lf\n",(P*8.00) / 100.00);
        }
        else if(P <= 2500.00)
        {
            M = P - 1000.00;
            printf("R$ %.2lf\n",(10.00 * 8.00) + ((M*18.00)/100.00));
        }
        else if(P > 2500.00)
        {
            M = P - 1000.00;
            B = M - 1500.00;
            printf("R$ %.2lf\n",(10.00 * 8.00) + (15.00 * 18.00) + ((B*28.00)/100));
        }
    }
    return 0;
}

