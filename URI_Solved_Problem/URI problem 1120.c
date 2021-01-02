#include<stdio.h>

int main()
{
    long long int N,R,D,Re,Res;

    for( ; ; )
    {
        scanf("%lld %lld", &D, &N);
        if(D==0 && N==0) break;
        else
        {
            Re = 0;
            while(N > 0)
            {
                R = N % 10;
                if(R != D) Re = (Re + R) * 10;
                N = N / 10;
            }
            Re = Re / 10;
            Res = 0;
            while(Re > 0)
            {
                R = Re % 10;
                Res = (Res + R) * 10;
                Re = Re / 10;
            }
            printf("%lld\n",Res/10);
        }
    }
    return 0;
}
