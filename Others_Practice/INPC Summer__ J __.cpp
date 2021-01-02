#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,a,b,c;

    while(scanf("%d", &t) != EOF)
    {
        while(t--)
        {
            scanf("%d %d %d %d", &n, &a, &b, &c);
            if(a == 0)
                printf("0\n");
            else
            {
                int p = a,sum = 0;
                int q = 0;
                while(q <= a)
                {
                    sum += abs(p-q);
                    p--;
                    q++;
                }
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}

