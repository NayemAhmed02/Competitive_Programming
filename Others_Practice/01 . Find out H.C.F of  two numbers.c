#include<stdio.h>

int main()
{
    int N1,N2,Min,I,J=1;
    printf("Enter First Number : ");
    scanf("%d",&N1);
    printf("Enter Second Number : ");
    scanf("%d",&N2);

    if(N1 > N2)Min = N2;
    else Min = N1;

    for(I=Min; ;I=Min/J)
    {
        if(N1 % I == 0 && N2 % I == 0)
        {
            printf("\n\nH.C.F Of First And Second Number Is : %d\n",I);
            break;
        }
        else
            J++;
    }

    return 0;
}
