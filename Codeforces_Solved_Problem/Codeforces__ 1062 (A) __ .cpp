#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[110];

    while(scanf("%d", &n) != EOF)
    {
        int ans = 0,maxi=0;

        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(int i=1; i<n; )
        {
            if(a[i] == (a[i-1]+1))
            {
                int p = i-1;
                int q = i;
                while(a[i] == (a[i-1]+1) && i<n)
                {
                    ans++;
                    i++;
                }
                ans++;
                if(a[p] == 1 || a[q] == 1000)
                    ans++;
                if(maxi < ans)
                    maxi = ans;
            }
            else
            {
                ans = 0;
                i++;
            }
        }
        printf("%d\n",maxi-2);
    }
    return 0;
}
