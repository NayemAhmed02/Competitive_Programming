#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,arr[1009],ele[1009],i;

    while(cin>>n>>r)
    {
        int j=1,p=r-1,sample=0,defin=0,i;
        for(int k=1; k<=n; k++)
        {
            cin>>arr[k];

            if(arr[k] == 1)
                ele[j++] = k;
        }
        //cout<<j<<" "<<ele[1]<<"\n";
        if(j == 1) cout<<"-1\n";
        else if(ele[1] > r) cout<<"-1\n";

        else
        {
            for(i=1; i<=n; i++)
            {
               if(arr[i] == 1)
               {
                   int y = (p+1) + i;
                   if(arr[y] == 1)
                   {
                       i = (y-1);
                   }
                   sample++;
                   defin = 0;
               }
               else
               {
                   defin++;
               }
               if(defin > (2*p))
               {
                   sample = 0;
                   break;
               }
              // cout<<i<<"\n";
            }
            if(sample==0) cout<<"-1\n";
            else if(i < n) cout<<"-1\n";
            else cout<<sample<<"\n";
        }

    }
    return 0;
}
