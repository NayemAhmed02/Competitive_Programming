#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d;
    while(scanf("%d", &t) != EOF)
    {
        while(t--)
        {
            scanf("%d", &d);

            double amb;

            amb = pow(d, 2.0);

            amb = sqrt(amb - (4*d));

            double a = (d+amb)/2.0;
            double b = d-a;

            if(d>0 && d<4)
                printf("N\n");
            else
                printf("Y %.9lf %.9lf\n",a,b);


        }
    }
    return 0;
}
