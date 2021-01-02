#include<stdio.h>

int main()
{
    int T,PA,PB,I,Y;
    double G1,G2;

    scanf("%d", &T);

    for(I=0; I<T; I++)
    {
        scanf("%d %d %lf %lf",&PA, &PB, &G1, &G2);
        Y = 0;
        while(PA <= PB)
        {
            PA = (PA * G1 / 100) + PA;
            PB = (PB * G2 / 100) + PB;
            Y++;
            if(Y == 101) break;
        }
        if(Y <= 100) printf("%d anos.\n",Y);
        else printf("Mais de 1 seculo.\n");
    }

    return 0;
}
