#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100009];

    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        sort(arr, arr+n);

        int m = n-2;
        int condition = 0;

        for(int i=0; i<m; i++)
            if(arr[i+2] < (arr[i] + arr[i+1]))
                condition = 1;

        if(condition == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
