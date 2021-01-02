#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,result;

    while(scanf("%d %d", &n, &k) != EOF)
    {
        result = 1;
        int re = n % k;
        if(re == 0)
        {
            while(n >= k)
            {
                result = result * n;
                n = n-k;
            }
        }
        else
        {
            while(n >= re)
            {
                result = result * n;
                n = n-k;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
