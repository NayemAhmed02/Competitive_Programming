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
        printf("%d %d %d\n",i,i*i,i*i*i);
    }


    return 0;
}
