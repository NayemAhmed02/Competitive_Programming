#include<stdio.h>

int main()
{
    int n,i,ans=0,p[110],q[110];
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &p[i], &q[i]);
        if((q[i]-p[i]) >= 2)
            ans++;
    }
    printf("%d\n",ans);

    return 0;
}
