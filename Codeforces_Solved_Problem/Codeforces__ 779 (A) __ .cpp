#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[110],b[110];
    int ele[6],eleb[6];

    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<6; i++)
        {
            ele[i] = 0;
            eleb[i] = 0;
        }

        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]==1) ele[1]++;
            else if(a[i] == 2) ele[2]++;
            else if(a[i] == 3) ele[3]++;
            else if(a[i] == 4) ele[4]++;
            else ele[5]++;
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d", &b[i]);
            if(b[i]==1) eleb[1]++;
            else if(b[i] == 2) eleb[2]++;
            else if(b[i] == 3) eleb[3]++;
            else if(b[i] == 4) eleb[4]++;
            else eleb[5]++;
        }

        int flag = 1;
        int ans = 0;

        for(int i=1; i<6; i++)
        {
            if((ele[i]+eleb[i]) % 2 != 0) flag = 0;
            ans = ans + abs(ele[i]-eleb[i]);
        }

        if(flag == 0) printf("-1\n");
        else printf("%d\n",ans/4);

    }
    return 0;
}
