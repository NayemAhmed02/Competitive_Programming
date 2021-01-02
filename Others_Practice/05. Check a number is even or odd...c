#include<stdio.h>

int main()
{
    int Num;
    printf("Checking Number Is : ");
    scanf("%d", &Num);

    if(Num==0)
    {
        printf("The Number Is Zerro\n",Num);
    }

    else if(Num % 2==0)
    {
        printf("The Number Is Even\n",Num);
    }
    else
    {
        printf("The Number Is Odd\n",Num);
    }
    return 0;
}
