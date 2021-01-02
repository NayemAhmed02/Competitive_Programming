#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lf=0;

    for(int i=100; i<1000; i++)
    {
        for(int j=100; j<1000; j++)
        {
            int prod = i * j;

            int rp=0,p = prod;

            while(p > 0)
            {
                int k = p%10;
                rp = (rp*10) + k;
                p /= 10;
            }
            if((rp==prod) && (prod > lf))
                lf = prod;
        }
    }
    printf("%d\n",lf);

    return 0;
}

