#include<stdio.h>

int FACT(int a);

int main()
{
    int row,n,r,s,fn,fr,fnr;
    printf("Enter Triangle Row Number : ");
    scanf("%d", &row);
    for(n=0; n<row; n++)
    {
        for(s=0; s<=row-n; s++)
            printf(" ");
        for(r=0; r<=n; r++)
        {
            if(n==0 || r==0)
                printf("1 ");
            else
            {
                fn = FACT(n);
                fr = FACT(r);
                fnr = FACT(n-r);
                printf("%d ",fn / (fr * fnr));
            }
        }
        printf("\n");
    }
    return 0;
}
int FACT(int a)
{
  int i,s=1;
  for(i=1; i<=a; i++)
        s = s * i;
  return s;
}
