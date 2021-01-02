#include<stdio.h>

int rstrlen(char *p);

int main()
{
    printf("%d",rstrlen("hello there"));
    return 0;
}
int rstrlen(char *p)
{
    if(*p)
    {
        p++;
        return 1+rstrlen(p);
    }
    else return 0;
}
