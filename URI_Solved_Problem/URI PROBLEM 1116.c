#include<stdio.h>

int main()
{
    int N,I;
    scanf("%d",&N);
    float X,Y;

    for(I=0; I<N; I++)
    {
        scanf("%f %f",&X,&Y);
        if(Y > 0 || Y < 0)
        {
            printf("%.1f\n",X/Y);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
