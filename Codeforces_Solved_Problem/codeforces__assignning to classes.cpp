#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> vec(2*n);

        for(long long i=0; i<2*n; i++)
            cin>>vec[i];

        sort(vec.begin(), vec.end());
        cout<<vec[n]-vec[n-1]<<"\n";
    }
    return 0;
}
