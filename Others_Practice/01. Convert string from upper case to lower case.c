#include<stdio.h>

int main()
{
    char str[200];
    int I;

    printf("Write A String By Upper Case Letters : ");
    gets(str);

    printf("\n\nGiven String In Lower Case Format Is : ");
    for(I=0; I<200; I++)
    {
        if(str[I] == '\0')break;
        else if(str[I]>=65 && str[I]<=90)
            printf("%c",str[I]+32);
        else
            printf("%c",str[I]);
    }
    printf("\n\n");

    return 0;
}
