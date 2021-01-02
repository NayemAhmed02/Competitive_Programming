#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[110];

    while(scanf("%d %d", &n, &m) != EOF)
    {
        int result[110],sum = m;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            result[i] = m + a[i];
            sum += a[i];
        }
        sort(result, result+n);
        sort(a,a+n);
        double def = sum / (n*1.0);
        int der = ceil(def);

        if(a[n-1] > der) der = a[n-1];

        printf("%d %d\n",der,result[n-1]);
    }
    return 0;
}
