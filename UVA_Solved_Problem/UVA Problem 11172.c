#include<stdio.h>

int main()
{
    int t,n1,n2;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n1, &n2);
        if(n1 > n2)
            printf(">\n");
        else if(n1 < n2)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
