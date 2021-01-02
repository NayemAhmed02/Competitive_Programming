#include<stdio.h>

int main()
{
    int Num1,Num2,Subt;

    printf("Enter First Number : ");
    scanf("%d", &Num1);

    printf("Enter Second Number : ");
    scanf("%d", &Num2);

    Subt = Num1 + ~Num2 + 1;

    printf(" \nSubtraction From First Number To Second Number : %d\n",Subt);

    return 0;

}
