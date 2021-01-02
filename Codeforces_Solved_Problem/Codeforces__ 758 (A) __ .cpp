#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[110];

    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        sort(a, a+n);

        int sum = 0;

        for(int i=0; i<n; i++)
        {
            sum += (a[n-1] - a[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
