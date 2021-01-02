#include<stdio.h>

int main()
{
    char a[100],b[100],c[100];
    int i,j,k;

    printf("Enter First String Under 100 Characters : ");
    gets(a);

    printf("Enter Second String under 100 characters : ");
    gets(b);

    for(i=0; i<100; i++)
        if(a[i] == '\0') break;

    for(j=0; j<100; j++)
        if(b[j] == '\0') break;

    printf("\nBefore Swapping : \n\n");
    printf("Frist String Is : ");
    for(k=0; k<i; k++)
    {
        printf("%c",a[k]);
        c[k] = a[k];
    }

    printf("\nSecond String Is : ");
    for(k=0; k<j; k++)
    {
        printf("%c",b[k]);
        a[k] = b[k];
    }

    for(k=0; k<i; k++)
        b[k] = c[k];

    printf("\n\nAfter Swapping : \n\n");
    printf("First String Is : ");
    for(k=0; k<j; k++)
        printf("%c",a[k]);

    printf("\nSecond String Is : ");
    for(k=0; k<i; k++)
        printf("%c",b[k]);

    printf("\n\n");
    return 0;
}
