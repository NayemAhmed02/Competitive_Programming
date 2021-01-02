#include<stdio.h>

int main()
{
    char ch;

    printf("ASCII CODE FOR CAPITAL LETTERS :\n \n" );

    for(ch='A'; ch<='Z'; ch++)
    {
        printf("%c = %d\n",ch,ch);
    }
    printf(" \nASCII CODE FOR SMALL LRTTERS :\n \n");

    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c = %d\n",ch,ch);
    }
    return 0;
}
