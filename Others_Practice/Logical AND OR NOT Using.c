#include<stdio.h>


int main()
{
    int p,q,r;

    printf("Enter P (0 or 1) : ");
    scanf("%d", &p);

    printf("Enetr Q (0 or 1) : ");
    scanf("%d", &q);

    r = (p || q) && !(p && q);

    printf("P AND Q : %d\n",p && q);
    printf("P OR Q : %d\n",p || q);
    printf("P XOR Q : %d\n",r);

    return 0;
}

