#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    while (scanf("%d", &n))
    {
        if(n == 0) return 0;
        count++;
        int sum = 0, t;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &t);
            if (t > 0)
                sum++;
            else
                sum--;
        }
        printf("Case %d: %d\n", count, sum);
    }

    return 0;
}
