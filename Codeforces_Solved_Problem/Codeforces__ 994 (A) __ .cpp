#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,ex[11],ey[11],result[11];

    while(scanf("%d %d", &x, &y) != EOF)
    {
        for(int i=0; i<x; i++)
            scanf("%d", &ex[i]);
        for(int j=0; j<y; j++)
            scanf("%d", &ey[j]);
        int k = 0;
        for(int i=0; i<y; i++)
        {
            for(int j=0; j<x; j++)
            {
                if(ey[i] == ex[j])
                {
                    result[k++] = j;
                    break;
                }

            }
        }
        sort(result, result+k);
        if(k > 0)
        {
            for(int i=0; i<k-1; i++)
                printf("%d ",ex[result[i]]);
            printf("%d\n",ex[result[k-1]]);
        }
        else
            printf("\n");
    }
    return 0;
}
