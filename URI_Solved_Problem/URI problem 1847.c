#include<stdio.h>

int main()
{
    int A,B,C;
    while(scanf("%d",&A) != EOF){
    scanf("%d %d", &B,&C);
    if(A > B && B <= C) printf(":)\n");
    else if(A < B && B >= C) printf(":(\n");
    else if(A < B && B < C && (C-B)<(B-A)) printf(":(\n");
    else if(A < B && B < C && (C-B)>=(B-A)) printf(":)\n");
    else if(A > B && B > C && (B-C)<(A-B)) printf(":)\n");
    else if(A > B && B > C && (B-C)>=(A-B)) printf(":(\n");
    else if(A == B)
    {
        if(B<C)  printf(":)\n");
        else printf(":(\n");
    }
    }
    return 0;
}
