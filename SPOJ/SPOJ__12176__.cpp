#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,c;

    cin>>t;

    while(t--)
    {
        cin>>l>>c;
        for(int i=0; i<l; i++)
        {
            for(int j=0; j<c; j++)
            {
                if((i+j) % 2 == 0) cout<<"*";
                else cout<<".";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
