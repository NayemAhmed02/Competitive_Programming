#include<stdio.h>

int main()
{
    char str[100];
    int i,j;

    printf("Enter A string: ");
    gets(str);

    for(i=0; i<100; i++)
    {
        if(str[i] == 0)
            break;
    }
    printf("\nThe String Length Is : %d\n",i);
    printf("\nThe Reverse String Is : ");

    for(j=i-1; j>=0; j--)
    {
        printf("%c",str[j]);
    }
    printf("\n\n");

    return 0;
}
