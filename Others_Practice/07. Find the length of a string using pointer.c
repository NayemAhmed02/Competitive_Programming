#include<stdio.h>

int main()
{
    char str[100];
    int *P,L=0;

    printf("Enter A String : ");
    gets(str);

    P = &L;
    printf("\n\nThe Length Of Given String Is : ");

    while(str[*P] != '\0')
        (*P)++;

    printf("%d\n",*P);

    return 0;
}
