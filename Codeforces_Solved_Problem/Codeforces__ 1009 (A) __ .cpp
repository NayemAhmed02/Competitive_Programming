#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int n,m,cost[SIZE],bill[SIZE];

    while(scanf("%d %d", &n, &m) != EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &cost[i]);
        for(int j=0; j<m; j++)
            scanf("%d", &bill[j]);
        int total_buy = 0,k = 0;

        for(int i=0; i<n && k<m; i++)
        {
            if(bill[k] >= cost[i])
            {
                total_buy++;
                k++;
            }
        }
        printf("%d\n",total_buy);
    }
    return 0;
}
