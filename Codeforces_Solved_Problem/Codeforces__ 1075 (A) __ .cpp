#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,y,p;

    while(cin>>n)
    {
        cin>>x>>y;

        if((x+y) <= (n+1))
            cout<<"White\n";
        else
            cout<<"Black\n";
    }
    return 0;
}
