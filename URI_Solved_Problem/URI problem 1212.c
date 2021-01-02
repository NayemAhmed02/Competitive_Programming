#include<stdio.h>

int main()
{
    long long int A,B;
    int N,R,R1,R2;
    for( ; ; )
    {
        scanf("%lld %lld", &A, &B);
        N = 0;
        R = 0;
        if(A == 0 && B == 0) break;
        else
        {
            while(A > 0 || B > 0)
            {
                R1 = A % 10;
                R2 = B % 10;
                if((R1 + R2 + R) > 9)
                {
                    R = 1;
                    N++;
                }
                else R = 0;
                A = A / 10;
                B = B / 10;
            }
            if(N == 0) printf("No carry operation.\n");
            else if(N == 1) printf("1 carry operation.\n");
            else printf("%d carry operations.\n",N);
        }
    }
    return 0;
}
