#include<stdio.h>

int main()
{
    char Hexa[100];
    int I,V,J,S,K,L=0,Deci=0;

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
    printf("\n\nEquivalent Decimal Number Is : %d\n\n",Deci);

    return 0;
}
