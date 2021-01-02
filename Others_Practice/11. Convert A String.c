#include<stdio.h>

int main()
{
    char str[100];
    int i,j;

    printf("Enter A String Under 100 Characters : ");
    gets(str);

    for(i=0; i<100; i++)
        if(str[i] == '\0')break;

    printf("\n\nThe Convert String Is : ");

    for(j=0; j<i; j++)
        printf("%c",str[j]);

    printf("\n\n");
    return 0;
}
