#include<stdio.h>

int main()
{
    int T,R1,R2,I;
    scanf("%d", &T);
    for(I=0; I<T; I++)
    {
        scanf("%d %d", &R1, &R2);
        printf("%d\n",R1+R2);
    }
    return 0;
}
