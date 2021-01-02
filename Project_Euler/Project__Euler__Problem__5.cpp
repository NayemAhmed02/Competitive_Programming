#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=1,gc,lcf;

    for(int m=2; m<20; m++)
    {
        gc = __gcd(n,m);
        lcf = (n*m) / gc;
        n = lcf;
        //cout<<m<<"\t"<<gc<<"\t"<<lcf<<"\n";
    }
    cout<<lcf<<"\n";

    return 0;
}

