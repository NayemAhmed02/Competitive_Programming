#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,s,d,i,k,j,l;
    int a[10001],b[10001];

    l=0;

    while(scanf("%d%d",&n,&q) != EOF)
    {
        if(n==0&&q==0)
            break;

        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<q; i++)
            scanf("%d",&b[i]);

        sort(a,a+n);

        printf("CASE# %d:\n",++l);

        for(i=0; i<q; i++)
        {
            k=0;
            for(j=0; j<n; j++)
            {
                if(b[i]==a[j]&&k!=1)
                {
                    printf("%d found at %d\n",b[i],j+1);
                    k=1;
                }
            }
            if(k==0)
                printf("%d not found\n",b[i]);
        }
    }

    return 0;
}
