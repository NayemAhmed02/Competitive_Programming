#include<stdio.h>

int main()
{
    int n,px,py,qx,qy;
    scanf("%d", &n);
    while(n)
    {
        scanf("%d %d %d %d",&px, &py, &qx, &qy);
        printf("%d %d\n",qx+(qx-px),qy+(qy-py));
        n--;
    }
    return 0;
}
