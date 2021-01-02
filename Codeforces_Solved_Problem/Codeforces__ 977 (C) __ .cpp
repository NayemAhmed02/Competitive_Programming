#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[200010];

    while(scanf("%d %d", &n, &k) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        sort(arr, arr+n);

        int condition = 0;

        if(k > n) printf("-1\n");
        else if(k == n) printf("%d\n",arr[n-1]);
        else if(n == 1 || k == 0)
        {
            if(arr[0] > 1) printf("%d\n",arr[0]-1);
            else printf("-1\n");
        }
        else
        {
            if(arr[k-1] != arr[k])
                condition = 1;

            if(condition == 1)
                printf("%d\n",arr[k-1]);
            else
                printf("-1\n");
        }
    }
    return 0;
}
