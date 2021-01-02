#include<stdio.h>

int main()
{
    int I,J,D,C=0;
    for(I=2; I<1001; I++)
    {
        D = 0;
        for(J=2; J<I; J++)
        {
            if(I % J == 0)
            {
                D++;
                break;
            }
        }
        if(D == 0)
        {
            printf("%d\t\t",I);
            C++;
        }
        if(C == 4)
        {
            printf("\n");
            C = 0;
        }
    }
    return 0;
}
