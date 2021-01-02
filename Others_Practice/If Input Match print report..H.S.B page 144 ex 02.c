#include<stdio.h>

int main()
{
    int i,j,c[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&c[i]);
        for(j=0; j<i; j++)
            if(c[i] == c[j])
                printf("Report\n");
    }
    return 0;
}
