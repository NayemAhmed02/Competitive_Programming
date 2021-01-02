#include<stdio.h>
#include<math.h>

int main()
{
    long long int X,J,R;
    int N,I,K;
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%lld", &X);
        K = 0;
        if(X==0 || X==1) printf("Not Prime\n");
        else
        {
        R = sqrt(X);

        for(J=2; J<=R; J++)
        {
            if(X % J == 0)
            {
                K++;
                break;
            }
        }
        if(K == 0) printf("Prime\n");
        else printf("Not Prime\n");
        }
    }
    return 0;
}
