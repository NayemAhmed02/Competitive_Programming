#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,s;
    int ele[1010];

    while(scanf("%d %d", &k, &n) != EOF)
    {
        for(int i=0; i<=k; k++)
            ele[i] = 0;
        int MIN = INT_MAX;
        int MAX = INT_MIN;
        int min_ele,max_ele,max_k;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &s);
            ele[s]++;
            if(ele[s] < MIN)
            {
                MIN = ele[s];
                min_ele = s;
            }
            if(ele[j] > MAX)
            {
                MAX = ele[s];
                max_ele = s;
            }
        }
        sort(ele, ele+k+1)


    }
}
