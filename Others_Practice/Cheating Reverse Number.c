#include<stdio.h>

int main()
{
    int n,p;
    printf("Input A Number Then Output Its Reverse Number :\n ");
    scanf("%d", &n);

    for(n=n; n>0; )
    {
        p = n % 10;
        n = n / 10;
        printf("%d",p);
    }
    return 0;
}
