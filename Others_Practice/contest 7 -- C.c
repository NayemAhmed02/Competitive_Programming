#include<stdio.h>

int main()
{
    int L,u,v,t,R;
    double D1,D2;

    while(scanf("%d %d %d %d", &L, &u, &v, &t) != EOF)
    {
        if(L == 0) break;
        if(u == v)
        {
            D1 = (L*1.0) / u;
            R = t / D1;
            printf("%d\n",R);
        }
        else
        {
            D2 = u - v;
            if(D2 < 0) D2 = D2*(-1);
            D1 = (L*1.0) / D2;
            R = t / D1;
            if((u*t) % L == 0 && (v*t) % L == 0)
                printf("%d\n",R+1);
            else printf("%d\n",R);
        }
    }
    return 0;
}
