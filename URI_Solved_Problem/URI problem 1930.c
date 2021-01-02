#include<stdio.h>

int main()
{
    int T1,T2,T3,T4;
    while(scanf("%d", &T1) != EOF)
    {
        scanf("%d %d %d", &T2,&T3, &T4);
        printf("%d\n",T1+T2+T3+T4-3);
    }
    return 0;
}
