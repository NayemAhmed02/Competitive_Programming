
#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n)
{
    int sum = 1,sq = sqrt(n);
    for (int i=2; i<=sq; i++)
    {
        if (n%i == 0)
        {
            sum += i;
            sum += (n/i);
        }
    }
    if((sq*sq) == n)
        sum -= sq;
    return sum;
}

int main()
{
    int aban[28800],j=0,ans=0;
    int no[28124];

    for(int i=2; i<25; i++)
    {
        no[i] = 1;
        int sod = sumOfDivisors(i);

        if(sod > i)
        {
            printf("%d\n",i);
        }
    }
    //printf("%d\n",j);

    for(int i=0; i<j; i++)
    {
        for(int k=i+1; k<j; k++)
        {
            int p = aban[i] + aban[k];
            no[p] = 0;
        }
    }

    for(int i=1; i<28123; i++)
        if(no[i] == 1) ans += i;

    //printf("%d\n",ans);

    return 0;
}

