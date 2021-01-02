#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0);

int main()
{
    int T,i;
    double area,r,total;

    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf", &r);
        total = (2*r) * (2*r);
        r = r*r;
        area = pi;
        area = area * r;
        printf("Case %d: %.2lf\n",i,total-area);
    }
    return 0;
}
