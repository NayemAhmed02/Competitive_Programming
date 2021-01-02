#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        bool flag = true;
        //cout<<a<<" "<<b<<" "<<c<<"\n";

        for(int i=0; i<a.size(); i++)
        {
            if(b[i] != c[i] && c[i] != a[i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
