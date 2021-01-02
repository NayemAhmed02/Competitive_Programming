#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];

    for(int i=0; i<3; i++)
        cin>>a[i];
    sort(a, a+3);

    int ans = a[2] - (a[0]+a[1]);
    ans++;

    if(ans < 0) ans = 0;

    cout<<ans<<"\n";

    return 0;
}
