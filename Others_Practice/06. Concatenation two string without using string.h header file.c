#include<stdio.h>

int main()
{
    char str[100],str1[100];
    int I=0,J=0;

    printf("Enter First String : ");
    gets(str);

    printf("Enter second String : ");
    gets(str1);

    while(str[I] != '\0')
        I++;

    while(str1[J] != '\0')
    {
        str[I] = str1[J];
        I++;
        J++;
    }
    printf("\n\nAfter concatenation the strings are : ");

    for(J=0; J<I; J++)
        printf("%c",str[J]);

    printf("\n\n");
    return 0;
}
