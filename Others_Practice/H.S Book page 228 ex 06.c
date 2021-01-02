#include<stdio.h>

int main(int a,char *ay[])
{
    printf("there were %d arguments.\n",a);
    printf("the last one is %s.\n",ay[a-1]);
    return 0;
}
