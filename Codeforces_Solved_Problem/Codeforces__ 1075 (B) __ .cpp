#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,t,arr[100009];

    scanf("%d %d", &n, &m);

    int sum = n+m;
    int p = 0;

    for(int i=0; i<sum; i++)
        scanf("%d", &x);
    for(int i=0; i<sum; i++)
    {
        scanf("%d", &t);

        if(t == 1)
            arr[p++] = i;
    }
    if(m == 1)
        printf("%d\n",n);
    else
    {
        p--;
        int ans,dif,half,l = 0;
        for(int i=0; i<p; i++)
        {
            ans = arr[i] - l;
            dif = arr[i+1] - arr[i];

            half = dif/2;

            ans += half;
            l = arr[i] + half + 1;

            printf("%d ",ans);
        }
        ans = arr[p] - l;

        ans = ans + (sum-1-arr[p]);

        printf("%d\n",ans);
    }

    return 0;
}
