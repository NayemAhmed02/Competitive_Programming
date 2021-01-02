#include<bits/stdc++.h>
using namespace std;

double area(int a,int b,int c,int d,int e,int f)
{
    return  fabs(( ((a-c)*(d-f)) - ((c-e)*(b-d)) ) * 0.5);
}

int main()
{
    int n,d;

    while(scanf("%d %d", &n, &d) != EOF)
    {
        if(n < d) swap(n,d);
        int m;
        int X,Y,x1,x2,x3,x4,y1,y2,y3,y4;
        x1 = 0;
        y1 = d;
        x2 = d;
        y2 = 0;
        x3 = n;
        y3 = n-d;
        x4 = n-d;
        y4 = n;
        scanf("%d", &m);
        double area5 = area(x2,y2,x1,y1,x4,y4);
        double area6 = area(x2,y2,x4,y4,x3,y3);
        while(m--)
        {
            int defin1 = 0,defin2 = 0;
            scanf("%d %d",&X,&Y);
            double area1 = area(X,Y,x2,y2,x1,y1);
            double area2 = area(X,Y,x4,y4,x3,y3);
            double area3 = area(X,Y,x1,y1,x4,y4);
            double area4 = area(X,Y,x3,y3,x2,y2);

            if((area1+area2+area3+area4) == (area5+area6)) printf("YES\n");
            else printf("NO\n");

        }
    }
    return 0;
}
