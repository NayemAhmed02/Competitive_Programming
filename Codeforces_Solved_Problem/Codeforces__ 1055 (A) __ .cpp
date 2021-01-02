#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,a[1010],b[1010];

    while(scanf("%d %d", &n, &s) != EOF)
    {
        for(int i=1; i<=n; i++)
            scanf("%d", &a[i]);

        for(int i=1; i<=n; i++)
            scanf("%d", &b[i]);

        if(a[1] == 1)
        {
            if(a[s] == 1) printf("YES\n");

            else
            {
                int flag = 0;

                for(int j=s+1; j<=n; j++)
                {
                    if(a[j]==1 && b[j]==1)
                        flag = 1;
                }
                if(flag == 1 && b[s] == 1)
                    printf("YES\n");
                else
                    printf("NO\n");
            }

        }
        else
            printf("NO\n");
    }
    return 0;
}
