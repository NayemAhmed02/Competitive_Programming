// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1000006

ll phi[SIZE],res[SIZE];

void ETF()
{
    for(int i=1; i<=1000000; i++)
        phi[i] = i;

    for(int j=2; j<=1000000; j++)
    {
        if(phi[j] == j)
        {
            for(int k=j; k<=1000000; k+=j)
                phi[k] = (phi[k] / j) * (j-1);
        }
    }
}

void lcmSum()
{
    for(int i=1; i<=1000000; i++)
    {
        for(int j=i; j<=1000000; j+=i)
        {
            res[j] += (i * phi[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ETF();
    lcmSum();

    int testcase,num;
    cin>>testcase;

    while(testcase--)
    {
        cin>>num;
        ll ans = res[num];
        ans++;
        ans = (ans/2)*num;
        cout<<ans<<"\n";
    }

    return 0;
}
