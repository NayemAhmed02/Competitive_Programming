#include<stdio.h>

int fact(int a);
int permu(int x,int y);

int main()
{
    int n,r,nr;
    printf("Enter First N Then R:\n\n");
    scanf("%d%d",&n,&r);
    if(n < r)printf("\nInvalid.\n");
    else
    {
    r=n-r;
    n=fact(n);
    r=fact(r);
    nr=permu(n,r);
    printf("\n\nNPR = %d\n",nr);
    }
    return 0;
}
int fact(int a)
{
    int s=1,i;
    for(i=a; i>0; i--)
        s = s*i;
    return s;
}
int permu(int x,int y)
{
    int p;
    p = x/y;
    return p;
}
