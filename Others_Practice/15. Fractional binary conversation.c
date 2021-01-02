#include<stdio.h>

int main()
{
    char str[100];
    int I=0,J=1,K=0,L,M,N,R,S1=0;
    double fR,fN,S2=0;

    printf("Enter A Fractional Binary Number : ");
    gets(str);

    while(str[I]!='.')
        I++;

    M=I;

    while(str[K]!='.')
    {
       R = 0;
       N = 1;
       for(L=0; L<I; L++)
       {
          R = N * (str[K]-48);
          N = N * 2;
       }
       S1 = S1 + R;
       K++;
       I--;
    }
    K = M+1;
    while(str[K]!='\0')
    {
        fR = 0;
        fN = 0.5;
        for(L=0; L<J; L++)
        {
          fR = fN * (str[K]-48);
          fN = fN / 2.0;
        }
        S2 = S2 + fR;
        K++;
        J++;
    }
    printf("\n\nEquivalent Fractional Decimal Number Is : %lf\n\n",S1+S2);

    return 0;
}
