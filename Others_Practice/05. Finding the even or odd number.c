#include<stdio.h>
#include<conio.h>

int main()
{
    int num;

    printf("Number is:");
    scanf("%d", &num);

    if(num==0)
    {
        printf("The number is zero");
    }

    else if(num % 2==0)
    {
        printf("The number is even");
    }

    else
    {
        printf("The number is odd");
    }

    return 0;



}
