#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,ans,flag,sq,i;

    while(scanf("%lld", &n) != EOF)
    {
        if(n % 2 == 0)
            printf("%lld\n",n/2);

        else
        {
            ans = 0;
            while(1)
            {
                if(n == 0) break;
                else if(n % 2 == 0)
                {
                    ans += (n/2);
                    n = 0;
                }
                else
                {
                    sq = sqrt(n);
                    sq++;
                    flag = 0;
                    for(i=3; i<=sq; i+=2)
                    {
                        if(n % i == 0)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 1)
                        n -= i;
                    else
                        n = 0;
                    ans++;
                }
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
