#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,c;

    cin>>t;

    while(t--)
    {
        cin>>l>>c;
        for(int i=1; i<=l; i++)
        {
            for(int j=1; j<=c; j++)
            {
                if(i==1 || i==l || j==1 || j==c) cout<<"*";
                else cout<<".";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}

