#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,x1,y1,x2,y2,r;

    while(scanf("%d", &T) != EOF)
    {
        while(T--)
        {
            scanf("%d %d %d %d %d", &x1,&y1,&x2,&y2,&r);
            double x3,y3,R;
            x3 = (x1+x2) / 2.0;
            y3 = (y1+y2) / 2.0;
            R = (double) sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
            R += r;
            printf("%.2lf %.2lf %.2lf\n",x3,y3,R);
        }
    }
    return 0;
}
