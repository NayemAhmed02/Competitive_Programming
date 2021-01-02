#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,ba,pa;
    int cr,br,pr;

    while(scanf("%d %d %d", &ca, &ba, &pa) != EOF)
    {
        scanf("%d %d %d", &cr, &br, &pr);

        int sum = 0;

        if(cr > ca)
            sum += (cr-ca);
        if(br > ba)
            sum += (br-ba);
        if(pr > pa)
            sum += (pr-pa);

        printf("%d\n",sum);
    }

    return 0;
}
