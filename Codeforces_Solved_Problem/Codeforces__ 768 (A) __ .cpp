#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100009];

    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        sort(arr, arr+n);

        int i = 1;

        while(arr[i-1] == arr[i])
            i++;

        int last = n-1;

        while(arr[last] == arr[last-1])
        {
            if(last == i)
                break;
            last--;
        }

        int ans = last-i;

        if(ans < 0) ans = 0;

        printf("%d\n",ans);
    }
    return 0;
}
