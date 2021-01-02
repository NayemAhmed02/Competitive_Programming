#include<stdio.h>

int main()
{
    int T,n;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);
        if(n < 11) printf("%d %d\n",0,n);
        else printf("%d %d\n",n-10,10);
    }
    return 0;
}
