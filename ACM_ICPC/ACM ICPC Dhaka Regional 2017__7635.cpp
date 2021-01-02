#include<bits/stdc++.h>
using namespace std;

double d[3010][3010];

int main()
{
    int n,q,x[3010],y[3010];

    while(scanf("%d %d", &n, &q) && n && q)
    {

        for(int i=0; i<n; i++)
            scanf("%d %d", &x[i], &y[i]);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int p1 = abs(x[i]-x[j]);
                int p2 = abs(y[i]-y[j]);

                d[i][j] = (double) sqrt((p1*p1) + (p2*p2));
            }
        }
        for(int i=0; i<q; i++)
        {
            int r,num=0;
            scanf("%d", &r);

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(d[i][j] <= r)
                        num++;
                }
            }
            double ans = (double) num/n;
            printf("%.2lf\n",ans);
        }
    }
    return 0;
}
