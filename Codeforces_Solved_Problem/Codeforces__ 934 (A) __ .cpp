#include<bits/stdc++.h>
using namespace std;

#define SIZE 50

int main()
{
    int tomnum,bannum,tomlig[SIZE],banlig[SIZE];
    long long int ans;

    while(scanf("%d %d", &tomnum, &bannum) != EOF)
    {
        for(int i=0; i<tomnum; i++)
            scanf("%d", &tomlig[i]);
        for(int j=0; j<bannum; j++)
            scanf("%d", &banlig[j]);

        sort(tomlig, tomlig+tomnum);
        sort(banlig, banlig+bannum);

        ans = tomlig[tomnum-2] * banlig[bannum-1];
        printf("%lld\n",ans);
    }
    return 0;
}
