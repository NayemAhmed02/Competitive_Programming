#include<stdio.h>

int main()
{
    char str[200];
    int I;

    printf("Write A String By Lower Case Letters : ");
    gets(str);

    printf("\n\nGiven String In Upper Case Format Is : ");
    for(I=0; I<200; I++)
    {
        if(str[I] == '\0')break;
        else if(str[I]>=97 && str[I]<=122)
            printf("%c",str[I]-32);
        else
            printf("%c",str[I]);
    }
    printf("\n\n");

    return 0;
}
