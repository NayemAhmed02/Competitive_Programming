#include<stdio.h>

int main()
{
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for(i=9,j=0; i>=0; i--,j++)
    {
        ara2[j] = ara[i];
        printf("%d\n",ara2[j]);
    }
    return 0;
}
