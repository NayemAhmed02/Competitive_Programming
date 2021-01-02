#include<stdio.h>

int main()
{
    int N,R,J,DN,I=0;
    char HN[100];

    printf("Enter A Decimal Number: ");
    scanf("%d",&N);
    DN = N;

    while(N > 0)
    {
        R = N % 16;
        if(R < 10)
            R = R+48;
        else
            R = R+55;
        N = N/16;
        HN[I] = R;
        I++;
    }
    printf("\n\nDecimal %d Is Equivalent To Hexadecimal : ",DN);
    for(J=I-1; J>=0; J--)
        printf("%c",HN[J]);

    printf("\n\n");
    return 0;
}
