#include<stdio.h>

int main()
{
    char Hexa[100];
    int I;

    printf("Enter A Hexadecimal Number : ");
    gets(Hexa);

    printf("\n\nEquivalent Binary Number Is : ");
    for(I=0; Hexa[I]!='\0'; I++)
    {
        if(Hexa[I] == '0')printf("0000");
        else if(Hexa[I] == '1')printf("0001");
        else if(Hexa[I] == '2')printf("0010");
        else if(Hexa[I] == '3')printf("0011");
        else if(Hexa[I] == '4')printf("0100");
        else if(Hexa[I] == '5')printf("0101");
        else if(Hexa[I] == '6')printf("0110");
        else if(Hexa[I] == '7')printf("0111");
        else if(Hexa[I] == '8')printf("1000");
        else if(Hexa[I] == '9')printf("1001");
        else if(Hexa[I] == 'a')printf("1010");
        else if(Hexa[I] == 'b')printf("1011");
        else if(Hexa[I] == 'c')printf("1100");
        else if(Hexa[I] == 'd')printf("1101");
        else if(Hexa[I] == 'e')printf("1110");
        else if(Hexa[I] == 'f')printf("1111");
        else if(Hexa[I] == 'A')printf("1010");
        else if(Hexa[I] == 'B')printf("1011");
        else if(Hexa[I] == 'C')printf("1100");
        else if(Hexa[I] == 'D')printf("1101");
        else if(Hexa[I] == 'E')printf("1110");
        else if(Hexa[I] == 'F')printf("1111");
    }
    printf("\n\n");

    return 0;
}
