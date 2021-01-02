#include<stdio.h>

int main()
{
    int X,Z,I,J=0,S=0;
    scanf("%d %d",&X,&Z);
    while(X>=Z)scanf("%d",&Z);
    for(I=X; I<Z; I++)
    {
       S = S+I;
       J++;
       if(S > Z)break;
    }
    printf("%d\n",J);
    return 0;
}
