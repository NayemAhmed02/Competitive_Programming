#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n,a[4000],b[4000],sum = 0;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);
    b[0] = a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i] <= b[i-1])
            b[i] = b[i-1]+1;
        else
            b[i] = a[i];
    }

    for(int i=0; i<n; i++)
        sum = sum + (b[i] - a[i]);

    cout<<sum<<"\n";

    return 0;
}
