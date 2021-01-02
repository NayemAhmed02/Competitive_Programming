#include<stdio.h>

int main()
{
    int T,x1,y1,x2,y2,z1,z2,i,j,M;
    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        scanf("%d", &M);
        printf("Case %d:\n",i);
        for(j=0; j<M; j++)
        {
            scanf("%d %d",&z1, &z2);
            if(((z1 >= x1) && (z1 <= x2)) && ((z2 >= y1) && (z2 <= y2)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
