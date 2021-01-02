#include<stdio.h>

int main()
{
    char str[100];
    int I;

    printf("Enter A String : ");
    gets(str);

    printf("\n\nASCII values of each characters of given string : ");
    for(I=0; str[I]!='\0'; I++)
        printf("%d ",str[I]);

    printf("\n\n");
    return 0;
}
