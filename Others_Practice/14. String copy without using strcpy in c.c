#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int I=0;

    printf("Enter A Sting : ");
    gets(str1);

    printf("\n\nAfter Copying : ");
    while(str1[I] != '\0')
    {
        str2[I] = str1[I];
        printf("%c",str2[I]);
        I++;
    }

    printf("\n\n");
    return 0;
}
