#include<stdio.h>

int main()
{
    char str[50],str1[1];
    int I,L=0;

    printf("Enter A String : ");
    gets(str);

    printf("\nEnter Character : ");
    gets(str1);

    for(I=0; str1[I]!='\0'; I++)
        L++;

    if(L == 1) printf("\n\nThe string from the given character is : (null)\n");

    else
    {
        printf("\n\nThe string from the given character is : ");
        for(I=1; I<L; I++)
            printf("%c",str1[I]);
    }

    printf("\n\n");
    return 0;
}
