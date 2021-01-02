#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,m,y,qy;

    while(scanf("%d", &t) != EOF)
    {
        for(int i=1; i<=t; i++)
        {
            scanf("%d %d %d %d", &d, &m, &y, &qy);
            int result = 0;

            if(d == 29 && m == 2)
            {
                for(int j=y+4; j<=qy; j+=4)
                {
                    if(j % 400 == 0)
                        result++;
                    else if(j % 4 == 0 && j % 100 != 0)
                        result++;
                }
            }
            else
            {
                result = qy - y;
            }

            printf("Case %d: %d\n",i,result);
        }
    }
    return 0;
}
