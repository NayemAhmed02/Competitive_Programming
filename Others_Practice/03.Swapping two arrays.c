#include<stdio.h>

int main()
{
    int a[10],b[10],c[10];
    int i;

    printf("Enter First Array : ");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);

    printf("\nEnter Second Array : ");
    for(i=0; i<10; i++)
        scanf("%d",&b[i]);

    printf("\n\nBefore Swapping : \n\n");
    printf("First Array : ");
    for(i=0; i<10; i++)
        printf("%d",a[i]);

    printf("\nSecond Array : ");
    for(i=0; i<10; i++)
        printf("%d",b[i]);

    for(i=0; i<10; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }

    printf("\n\nAfter Swapping : \n\n");
    printf("First Array : ");
    for(i=0; i<10; i++)
        printf("%d",a[i]);

    printf("\nSecond Array : ");
    for(i=0; i<10; i++)
        printf("%d",b[i]);

    printf("\n\n");
    return 0;
}
