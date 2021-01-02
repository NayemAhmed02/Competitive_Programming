#include<stdio.h>

int main()
{
    int s,e,i;

    printf("Starts From : ");
    scanf("%d", &s);

    printf("Ends To : ");
    scanf("%d", &e);

    for(i=s; i<=e; i++)
    {
        printf("%d\t\t\t",i);
    }
    return 0;
}
