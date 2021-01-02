#include<stdio.h>

int main()
{
    char str[50],str1[50];
    int I,J=0;

    printf("Enter First String : ");
    gets(str);
    printf("Enter Second String : ");
    gets(str1);

    for(I=0; str[I]!='\0' && str1[I]!='\0'; I++)
    {
        if(str[I] != str1[I])
        {
            J++;
            break;
        }
    }
    if(J == 0 && str[I] == '\0' && str1[I] == '\0')
        printf("\n\nBoth strings are equal.\n\n");
    else
        printf("\n\nBoth strings are not equal.\n\n");

    return 0;
}
