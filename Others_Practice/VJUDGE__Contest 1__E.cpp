#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f[5002],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&f[i+1]);
    }
    bool tf=false;
    for(j=1;j<=n;j++)
    {
        if(j==f[f[f[j]]])
        {
        printf("YES");
        tf=true;
        break;
        }

    }
    if(tf==false)
     printf("NO");

    return 0;
}
