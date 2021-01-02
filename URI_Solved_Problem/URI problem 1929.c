#include<stdio.h>

int main()
{
    int A,B,C,D,M,T;
    while(scanf("%d", &A) != EOF)
    {
        T = 0;
        scanf("%d %d %d", &B,&C,&D);
        if(A > B && A > C) M = A;
        else if(B > C) M = B;
        else M = C;
        if(M < (A+B+C-M)) T++;

        if(A > B && A > D) M = A;
        else if(B > D) M = B;
        else M = D;
        if(M < (A+B+D-M)) T++;

        if(A > C && A > D) M = A;
        else if(C > D) M = C;
        else M = D;
        if(M < (A+C+D-M)) T++;

        if(B > C && B > D) M = B;
        else if(C > D) M = C;
        else M = D;
        if(M < (D+B+C-M)) T++;

        if(T == 0) printf("N\n");
        else printf("S\n");
    }

    return 0;
}
