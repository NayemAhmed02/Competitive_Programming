#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s,a,b,c;
    long long int ans;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        ans = 0;
        cin>>s>>a>>b>>c;

        long long int num = s / (a*c);

        ans = num*(a+b);

        s = s - (num*a*c);

        long long int num2 = s/c;

        ans += num2;

        cout<<ans<<"\n";

    }
    return 0;
}
