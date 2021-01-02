#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,MIN,MAX=2,num=1,num2=2;

    cin>>n>>m;

    MIN = n - (2*m);
    if(MIN < 0) MIN = 0;


    while(num < m)
    {
        num += num2;
        num2++;
        MAX++;
        cout<<num<<" "<<MAX<<"\n";
    }
    MAX = n - MAX;
    cout<<MIN<<" "<<MAX<<"\n";

    return 0;


}
