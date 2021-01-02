#include<stdio.h>

int main()
{
    int N,R,J=1,DN=0;
    int K,l=0;
    char HN[100];

    printf("Enter A Binary Number : ");
    scanf("%d",&N);

    while(N > 0)
    {
        R = N % 10;
        DN = DN+(R*J);
        J = J*2;
        N = N/10;
    }
    printf("\nEquivalent Decimal Number Is : %d\n",DN);

    while(DN > 0)
    {
        R = DN % 16;
        if(R < 10)
            R = R+48;
        else
            R = R+55;
        DN = DN/16;
        HN[l] = R;
        l++;
    }
    printf("\n\nEquivalent Hexadecimal Number Is : ");
    for(K=l-1; K>=0; K--)
        printf("%c",HN[K]);

    printf("\n\n");
    return 0;
}


