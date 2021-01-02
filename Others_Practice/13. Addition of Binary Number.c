#include<stdio.h>

int main()
{
    int BN1,BN2,R=0,I=0,SUM[50];

    printf("Enter First Binary Number : ");
    scanf("%d", &BN1);

    printf("Enter Second Binary Number : ");
    scanf("%d", &BN2);

    while(BN1 > 0 || BN2 > 0)
    {
        SUM[I] = (BN1 % 10 + BN2 % 10 + R) % 2;
        R = (BN1 % 10 + BN2 % 10 + R) / 2;
        BN1 = BN1 / 10;
        BN2 = BN2 /10;
        I++;
    }
    if(R > 0)
    {
        SUM[I] = R;
        I++;
    }
    I = I-1;

    printf("\n\nSum Of Two Binary Number Is : ");

    while(I >= 0)
    {
        printf("%d",SUM[I]);
        I--;
    }
    printf("\n\n");

    return 0;
}
