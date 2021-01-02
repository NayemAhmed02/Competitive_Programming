#include<stdio.h>

int main()
{
    int N[20];
    int I,J=0;

    for(I=0; I<20; I++)
        scanf("%d",&N[I]);
    for(I=19; I>=0; I--)
    {
        printf("N[%d] = %d\n",J,N[I]);
        J=J+1;
    }
    return 0;
}


