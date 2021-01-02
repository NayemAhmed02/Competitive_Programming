#include<stdio.h>

int main()
{
    char a[10],b[10],c[10];
    int i;

    printf("Enter First String must be 10 characters : ");
    for(i=0; i<10; i++)
        scanf("%c",&a[i]);

    printf("\nEnter Second String must be 10 characters : ");
    for(i=0; i<10; i++)
        scanf("%c",&b[i]);

    printf("\n\nBefore Swapping : \n\n");
    printf("First String : ");
    for(i=0; i<10; i++)
        printf("%c",a[i]);

    printf("\nSecond String : ");
    for(i=0; i<10; i++)
        printf("%c",b[i]);

    for(i=0; i<10; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }

    printf("\n\nAfter Swapping : \n\n");
    printf("First Sting : ");
    for(i=0; i<10; i++)
        printf("%c",a[i]);

    printf("\nSecond String : ");
    for(i=0; i<10; i++)
        printf("%c",b[i]);

    printf("\n\n");
    return 0;
}

