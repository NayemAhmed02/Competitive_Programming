#include<stdio.h>

int main()
{
    int N1,R1,R2,N2=0;
    printf("Enter A Number: ");
    scanf("%d", &N1);

    while(N1 > 0)
    {
        R1 = N1 % 10;
        N2 = (N2 + R1) * 10;
        N1 = N1 / 10;
    }
    N2 = N2 / 10;
    printf("\n\nEach digits of given number are: ");

    while(N2 > 0)
    {
        R2 = N2 % 10;
        printf("%d  ",R2);
        N2 = N2 / 10;
    }
    printf("\n");
    return 0;
}
