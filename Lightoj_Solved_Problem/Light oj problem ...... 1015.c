#include<stdio.h>

int main()
{
    int T,N,I,J,Sum,Num;
    scanf("%d", &T);

    for(I=1; I<=T; I++)
    {
        scanf("%d", &N);
        Sum = 0;
        for(J=0; J<N; J++)
        {
            scanf("%d", &Num);
            if(Num > 0) Sum = Sum + Num;
        }
        printf("Case %d: %d\n",I,Sum);
    }
    return 0;
}
