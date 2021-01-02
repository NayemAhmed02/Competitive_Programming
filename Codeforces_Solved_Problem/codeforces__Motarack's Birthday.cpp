#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int v[n],diff[n];

        for(int i=0; i<n; i++)
            cin>>v[i];

        int flag=0;

        for(int i=0; i<n; i++)
        {
            if(i<(n-1) && v[i] == -1 && v[i+1] != -1)
            {
                diff[flag++] = v[i+1];
            }

            if(i>0 && v[i] == -1 && v[i-1] != -1)
            {
                diff[flag++] = v[i-1];
            }
        }
        int k,midi=0;
        if(flag == 0)
        {
            k = 0;
            midi = 0;
        }
        else
        {
            sort(diff, diff+flag);
            k = (diff[0] + diff[flag-1]) / 2;

            if(v[0] == -1)
                v[0] = k;

            for(int i=1; i<n; i++)
            {
                if(v[i] == -1)
                    v[i] = k;

                midi = max(midi, abs(v[i]-v[i-1]));
            }
        }
        cout<<midi<<" "<<k<<"\n";

    }
    return 0;
}
