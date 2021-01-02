#include<stdio.h>

int main()
{
    int I,J,N,MIN,M;

    while(scanf("%d",&N) != EOF){
        MIN=20;
        J = 0;
        for(I = 0;I < N;I++){
            scanf("%d",&M);
            if(M<MIN){
                MIN=M;
                J=I+1;
            }
        }
        printf("%d\n",J);
    }
    return 0;
}
