#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,l,r,sqr3,sqr4,divi1,divi2,ans;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>l>>r;

        double sqr1 = sqrt(l);
        sqr1 = ceil(sqr1);
        double sqr2 = sqrt(r);
        sqr2 = floor(sqr2);

        divi1 = (l-1)/2;
        sqr3 = sqrt(divi1);
        divi2 = r/2;
        sqr4 = sqrt(divi2);

        ans = (sqr2-sqr1)+1;
        ans = ans + (sqr4-sqr3);

        cout<<ans<<"\n";
    }
    return 0;
}
