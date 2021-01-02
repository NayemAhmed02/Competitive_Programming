#include<stdio.h>

int main()
{
    int N,I=0,Sum=0;
    double A;
    for( ; ; )
    {
        scanf("%d", &N);
        if(N < 0) break;
        else
        {
           Sum = Sum + N;
           I++;
        }
    }
    A = Sum / (I * 1.00);
    printf("%.2lf\n",A);
    return 0;
}
