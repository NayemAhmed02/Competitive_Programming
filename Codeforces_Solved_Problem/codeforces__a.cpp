#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long sum,k;
        cin>>sum>>k;

        if((sum%2) == (k%2))
        {
            if(sum < (k*k))
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;
}
