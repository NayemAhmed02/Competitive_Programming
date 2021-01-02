#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,s;

    while(scanf("%d %d %d", &t, &x, &s) != EOF)
    {
        if(t == s)
            printf("YES\n");
        else if(t > s)
            printf("NO\n");
        else if(x < 2)
            printf("YES\n");
        else
        {
            int dif = s-t;
            int p = dif/x;

            if(p >= 1)
            {
                if(dif % x == 0)
                    printf("YES\n");
                else if((dif-1) % x == 0)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
                printf("NO\n");
        }

    }
    return 0;
}
