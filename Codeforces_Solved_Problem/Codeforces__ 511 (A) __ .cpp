#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    while(scanf("%d", &num) != EOF)
    {
        int x,y;
        long long int sum,maxi = 0;

        while(num--)
        {
            scanf("%d %d", &x, &y);
            sum = x + y;
            if(sum > maxi)
                maxi = sum;
        }
        printf("%lld\n",maxi);
    }
    return 0;

}
