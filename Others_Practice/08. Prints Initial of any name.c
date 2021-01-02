#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter Any Name : ");
    gets(str);
    printf("\n\nInitial Of Given Name Is : %c",str[0]);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ' ')
            printf("%c",str[i+1]);
    }
    printf("\n\n");
    return 0;
}
