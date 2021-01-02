#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    long long int N,P;
    long double R,M;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%lld", &N);
        M = N * 1.00;
        R = sqrt(M);
        P = (long long int) R;
        P++;
        printf("%lld\n", P);
        printf("%lld\n",P*P);
    }
    return 0;
}
