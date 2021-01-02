#include<stdio.h>

int main()
{
    int N,X,I=0,J=0,P;
    scanf("%d",&N);

    for(P=0; P<N; P++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20)
        {
            I++;
        }
        else
        {
            J++;
        }
    }
    printf("%d in\n",I);
    printf("%d out\n",J);

    return 0;
}
