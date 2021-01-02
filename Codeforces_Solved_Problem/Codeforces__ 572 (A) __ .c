#include <stdio.h>

int main()
{
    int i,na, ma, k,l, n[100002], m[100002];

    scanf("%d %d %d %d", &na, &ma, &k, &l);

    for(i=0; i<na; i++)
        scanf("%d", &n[i]);

    for(i=0; i<ma; i++)
        scanf("%d", &m[i]);

    if(n[k-1] < m[ma-l])
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
