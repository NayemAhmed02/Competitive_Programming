#include<stdio.h>

int main()
{
    int A,B;
    while(scanf("%d", &A) != EOF)
    {
        scanf("%d", &B);
        if(A >= B) printf("%d\n",A);
        else printf("%d\n",B);
    }
    return 0;
}
