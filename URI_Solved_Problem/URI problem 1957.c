#include<stdio.h>

int main()
{
    long long int V,R,I,J;
    char HN[100];


    while(scanf("%lld", &V) != EOF)
    {
        I = 0;
        while(V > 0)
        {
            R = V % 16;
            if(R < 10)
               R = R+48;
            else
               R = R+55;
            V = V/16;
            HN[I] = R;
            I++;
        }
        for(J=I-1; J>=0; J--)
            printf("%c",HN[J]);
        printf("\n");
    }

    return 0;
}
