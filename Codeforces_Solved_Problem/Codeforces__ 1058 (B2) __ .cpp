#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;

    while(scanf("%d %d", &n, &d) != EOF)
    {
        int m;
        scanf("%d", &m);

        int X,Y;
        while(m--)
        {
            scanf("%d %d", &X, &Y);

            int define = 0;
            int low_y,high_y;

            if(X <= n)
            {
                int low_y = abs(X-d);

                if(X <= (n-d)) high_y = X+d;
                else high_y = (n-X) + (n-d);

                if(Y>=low_y && Y<=high_y) define = 1;
            }
            if(define == 1) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
