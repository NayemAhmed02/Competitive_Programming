#include<stdio.h>

int main()
{
    char Hexa[100];
    int I,V,J,S,K,L=0,Deci=0;
    int R,Sum=0,Oct=0;

    printf("Enter A Hexadecimal Number : ");
    gets(Hexa);

    while(Hexa[L] != '\0')
        L++;

    for(I=0; Hexa[I]!='\0'; I++)
    {
        if(Hexa[I] >= '0' && Hexa[I] <= '9')
            V = Hexa[I] - 48;
        else if(Hexa[I] >= 'A' && Hexa[I] <= 'Z')
            V = Hexa[I] - 65 + 10;
        else if(Hexa[I] >= 'a' && Hexa[I] <= 'z')
            V = Hexa[I] - 97 + 10;

        S = 0;
        K = 1;

        for(J=0; J<L; J++)
        {
            S = V * K;
            K = K * 16;
        }

        L--;
        Deci = Deci + S;
    }

    while(Deci > 0)
    {
        R = Deci % 8;
        Sum = (Sum + R) * 10;
        Deci = Deci / 8;
    }
    Sum = Sum / 10;

    while(Sum > 0)
    {
        R = Sum % 10;
        Oct = (Oct + R) * 10;
        Sum = Sum / 10;
    }

    Oct = Oct / 10;
    printf("\n\nEquivalent Octal Number Is : %d\n\n",Oct);

    return 0;
}
