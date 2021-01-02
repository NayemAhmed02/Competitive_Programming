#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;

    while(cin>>a>>b)
    {
        long long res = 0,remi,p;

        while(1)
        {
            p = a/b;
            res += p;
            remi = a % b;

            if(remi == 0) break;
            else
            {
                a = b;
                b = remi;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
