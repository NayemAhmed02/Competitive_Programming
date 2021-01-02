#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,cnt;
    cin>>n;
    vector<int> vec(n);

    for(int i=0; i<n; i++)
        cin>>vec[i];

    for(int i=30; i>=0; i--)     // represent 31 bits.
    {
        cnt = 0;       // cnt = number of 1 in a particular bit position's
        for(int j=0; j<n; j++)
        {
            if((vec[j]>>i) & 1 == 1)
            {
                cnt++;
                temp = j;
                if(cnt > 1)
                    break;
            }
        }
        if(cnt == 1)
            break;
    }
    if(cnt == 1)
    {
        int t = vec[0];
        vec[0] = vec[temp];
        vec[temp] = t;
    }
    cout<<vec[0];
    for(int i=1; i<n; i++)
        cout<<" "<<vec[i];
    cout<<"\n";

    return 0;
}
