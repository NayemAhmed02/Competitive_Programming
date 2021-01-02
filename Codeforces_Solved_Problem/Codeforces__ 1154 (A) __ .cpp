#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4],ans[4];

    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
    {
        int Max = a[0];

        for(int i=1; i<4; i++)
            if(a[i] > Max)
                Max = a[i];

        for(int i=0,j=0; i<4; i++)
            if(Max > a[i]) ans[j++] = Max - a[i];

        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<"\n";
    }
    return 0;
}
