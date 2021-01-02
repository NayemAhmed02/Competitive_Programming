#include<stdio.h>

int main()
{
    long long int T,N,I,J,Re[10010];
    scanf("%lld", &T);

    for(I=1; I<=T; I++)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &Re[0],&Re[1],&Re[2],&Re[3],&Re[4],&Re[5],&N);
        if(N < 6) printf("Case %lld: %lld\n",I,Re[N] % 10000007);
        else
        {
            for(J=6; J<=N; J++)
                Re[J] = ((Re[J-1] + Re[J-2] + Re[J-3] + Re[J-4] + Re[J-5] + Re[J-6]) % 10000007);
            printf("Case %lld: %lld\n",I,Re[N] % 10000007);
        }

    }
    return 0;
}
