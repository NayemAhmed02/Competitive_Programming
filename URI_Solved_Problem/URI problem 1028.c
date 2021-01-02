#include<stdio.h>

int main()
{
    int N,F1,F2,M,I,J;
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%d %d", &F1,&F2);
         if(F1 < F2){
        M = F1;
        F1 = F2;
        F2 = M;
        }
        while(F1 % F2 != 0){
            J = F1;
            F1 = F2;
            F2 = J % F1;
        }
        printf("%d\n",F2);
    }
    return 0;
}


