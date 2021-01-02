#include<stdio.h>

int main()
{
    int I,J,D;
    printf("All Prime Numbers Between 1 to 300 : \n\n");

    for(I=2; I<=300; I++)
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
            printf("%d\t",I);
    }
    printf("\n");
    return 0;
}
