#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[200009];

    while(scanf("%d %d", &n, &k) != EOF)
    {
        int prev = 0;
        long long int ans = 0;
        n--;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);

            if(prev == 0)
            {
                int r = arr[i] / k;
                prev = arr[i] - (r*k);
                ans = (long long int) (ans + r);
            }
            else
            {
                int sum = prev + arr[i];

                if(sum <= k)
                {
                    ans = (long long int) (ans + 1);
                    prev = 0;
                }
                else
                {
                    int r = sum / k;
                    prev = sum - (r*k);
                    ans = (long long int) (ans + r);
                }
            }

        }
        scanf("%d", &arr[n]);
        arr[n] += prev;

        int r = arr[n] / k;
        ans = (long long int) (ans + r);

        if(arr[n] > (r*k))
            ans = (long long int) (ans + 1);

        printf("%lld\n",ans);

    }
    return 0;
}
