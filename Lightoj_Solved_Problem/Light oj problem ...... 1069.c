#include<stdio.h>

int main()
{
    int T,a,b,i,time;
    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf("%d %d", &a, &b);
        if(b >= a) time = (4 * b) + 19;
        else time = ((a-b) * 4) + (4 * a) + 19;
        printf("Case %d: %d\n",i,time);
    }
    return 0;
}
