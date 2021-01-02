#include<bits/stdc++.h>
using namespace std;

long long int phi[1000009];

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase,num;
    ETF();
    cin>>testcase;
    while(testcase--)
    {
        cin>>num;
        cout<<phi[num]<<"\n";
    }
    return 0;
}
