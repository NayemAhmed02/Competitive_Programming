#include<stdio.h>

int main()
{
    int I,J=0,N[15];

    for(I=0; I<15; I++)
    {
        scanf("%d",&N[I]);
    }
    for(I=0; I<15; I++)
    {
        if(N[I] % 2 == 0)
        {
            printf("par[%d] = %d\n",J,N[I]);
            J++;
            if(J == 5)J = 0;
        }
    }
    J = 0;
    for(I=0; I<15; I++)
    {
        if(N[I] % 2 != 0)
            {
            printf("impar[%d] = %d\n",J,N[I]);
            J++;
            if(J == 5)J = 0;
            }
    }
}
