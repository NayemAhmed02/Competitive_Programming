#include<stdio.h>

int Decimal(int A);

int main()
{
    int BN1,BN2,DN1,DN2,DM;
    int R,I,J=0,S=0,BM=0;

    printf("Enter First Binary Number : ");
    scanf("%d", &BN1);
    printf("Enter Second Binary Number : ");
    scanf("%d", &BN2);

    DN1 = Decimal(BN1);
    DN2 = Decimal(BN2);

    DM = DN1 * DN2;
    while(DM > 0)
    {
        R = DM % 2;
        S = (S + R) * 10;
        DM = DM/2;
        J++;
    }
    S = S/10;

    for(I=0; I<J; I++)
    {
        R = S % 10;
        BM = (BM + R) * 10;
        S = S/10;
    }
    BM = BM/10;

    printf("\n\nProduct Of Given Binary Numbers : %d\n",BM);

    return 0;
}

int Decimal(int A)
{

    int R,S=0,J=1;

    while(A > 0)
    {
       R = A % 10;
       S = S + (R * J);
       A = A / 10;
       J = J * 2;
    }
    return S;
}
