#include<stdio.h>

int func();

int main()
{
    int n = 1;

    func(n);

    return 0;
}
int func(n)
{
    if(n < 101)
    {
        printf("%d\n",n);
        func(n+1);
    }
}
