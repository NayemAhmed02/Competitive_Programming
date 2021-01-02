
#include<stdio.h>

int fact(int a);

int main()
{
    int n,r,nr;
    printf("Enter First N Then R:\n\n");
    scanf("%d%d",&n,&r);
    if(n < r)printf("\nInvalid.\n");
    else
    {
    nr = n-r;

    n=fact(n);
    r=fact(r);
    nr=fact(nr);
    printf("\n\nNCR Of Given Number = %d\n",n/(r*nr));
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
