#include<stdio.h>

int main()
{
    char str[100];
    int I,J=0;

    printf("Enter A String : ");
    gets(str);

    while(str[J] != '\0')
        J++;

    printf("\nReverse Of Given String Is : ");
    for(I=J-1; I>=0; I--)
        printf("%c",str[I]);

    printf("\n");
    return 0;
}
