#include<bits/stdc++.h>
using namespace std;

int sumOfDivisors(int a)
{
    int sq = sqrt(a);
    int s = 0;

    for(int i=2; i<=sq; i++)
    {
        if(a % i == 0)
        {
            s += i;
            s += (a/i);
        }
    }
    if((sq*sq) == a)
        s -= sq;

    return s+1;
}

int main()
{
    int sum = 0;

    for(int i=2; i<10000; i++)
    {
        int p = sumOfDivisors(i);

        int q = sumOfDivisors(p);

        if((i != p) && (i == q))
        {
            sum += i;
            printf("%d\n",i);

        }
    }
    cout<<sum<<"\n";

    return 0;
}
