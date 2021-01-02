#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[60];

    while(scanf("%d %d", &n, &k) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        int total = 0;
        for(int i=0; i<n; i++)
            if(arr[i] > 0)
                if(arr[i] >= arr[k-1]) total++;
        printf("%d\n",total);
    }
    return 0;
}
