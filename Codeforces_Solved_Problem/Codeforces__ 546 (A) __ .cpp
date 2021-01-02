#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,w,result;

    while(cin>>k>>n>>w)
    {
        result = (((w*(w+1))/2) * k) - n;

        if(result < 0) result = 0;

        cout<<result<<"\n";
    }
    return 0;
}
