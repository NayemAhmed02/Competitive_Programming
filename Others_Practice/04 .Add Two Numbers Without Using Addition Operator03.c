#include<stdio.h>

int main()
{
    int Num1,Num2,Sum;

    printf("Enter First Number : ");
    scanf("%d", &Num1);

    printf("Enter Second Number : ");
    scanf("%d", &Num2);

    Sum = Num1 - ~Num2 - 1;

    printf(" \nSum Of Two Numbers : %d\n",Sum);

    return 0;

}

