#include<stdio.h>

int main()
{
    char str[100];
    int I;
    printf("Enter A String : ");
    gets(str);
    for(I=0; str[I]!='\0'; I++)
    {
        if(str[I]=='a' || str[I]=='A' || str[I]=='e' || str[I]=='E' || str[I]=='i')
            printf("%c",str[I]);
        else if(str[I]=='I' || str[I]=='0' || str[I]=='O' || str[I]=='u' || str[I]=='U')
            printf("%c",str[I]);
    }

    return 0;
}
