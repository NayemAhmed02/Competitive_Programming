#include<stdio.h>

int main()
{
    int N1,N2,Max,I,J=1;
    printf("Enter First Number : ");
    scanf("%d",&N1);
    printf("Enter Second Number : ");
    scanf("%d",&N2);

    if(N1 > N2)Max = N1;
    else Max = N2;

    for(I=Max; ;I=Max*J)
    {
        if(I % N1 == 0 && I % N2 == 0)
        {
            printf("\n\nL.C.M Of First And Second Number Is : %d\n",I);
            break;
        }
        else
            J++;
    }

    return 0;
}
