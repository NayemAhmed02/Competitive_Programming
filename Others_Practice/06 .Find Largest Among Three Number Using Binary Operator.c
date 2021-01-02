#include<stdio.h>

int main()
{
    int N1,N2,N3;

    printf("Enter The First Number : ");
    scanf("%d", &N1);

    printf("Enter The Second Number : ");
    scanf("%d", &N2);

    printf("Enter The Third Number : ");
    scanf("%d", &N3);

    if(N1 - N2 > 0 && N1 - N3 > 0)
    {
        printf(" \nThe Largest Number Is : %d\n",N1);
    }
    else if(N2 - N3 > 0)
    {
        printf(" \nThe Largest Number Is : %d\n",N2);
    }
    else
    {
        printf(" \nThe Largest Number Is : %d\n",N3);
    }

    return 0;
}
