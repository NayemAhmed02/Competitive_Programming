#include<stdio.h>

int main()
{
    int N1,N2,S;
    printf("Enter First Number : ");
    scanf("%d", &N1);
    printf("Enter Second Number : ");
    scanf("%d", &N2);
    printf("\nBefore Swapping : N1 = %d , N2 = %d\n\n",N1,N2);

    S = N1;
    N1 = N2;
    N2 = S;

    printf("After Swaapping : N1 = %d , N2 = %d\n",N1,N2);

    return 0;
}
