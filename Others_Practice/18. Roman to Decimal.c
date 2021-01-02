#include<stdio.h>

int main()
{
    char str[100];
    int I,N,J=0,DN=0;
    printf("Enter A Roman Number (Valid Digits Are I, V, X, L, C, D, M) : ");
    gets(str);
    for(I=0; str[I]!='\0'; I++)
        if(str[I]=='I' || str[I]=='V' || str[I]=='X' || str[I]=='L' || str[I]=='C' || str[I]=='D' || str[I]=='M')
            J++;
    if(I != J)
        printf("\n\nI Am Soory...It's A Invalid Number.\n\n");
    else
    {
        for(I=0; str[I]!='\0'; I++)
        {
            if(str[I]=='I')
                N = 1;
            else if(str[I]=='V')
                N = 5;
            else if(str[I]=='X')
                N = 10;
            else if(str[I]=='L')
                N = 50;
            else if(str[I]=='C')
                N = 100;
            else if(str[I]=='D')
                N = 500;
            else if(str[I]=='M')
                N = 1000;
            DN = DN + N;
        }
        printf("\n\nEquivalent Decimal Number Is : %d\n\n",DN);
    }
    return 0;
}
