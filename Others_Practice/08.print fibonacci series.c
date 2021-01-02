#include<stdio.h>

int main()
{
    int s,e,i,j=0;
    printf("Series Start From: ");
    scanf("%d",&s);
    printf("Series End To: ");
    scanf("%d",&e);
    printf("\nLet's See The Fibonacci Series...\n\n\n");

    for(i=s; i<=e; i=j+i)
    {
      printf("%d ",i);
      j = j+i;
      if(j > e)
      {
          break;
      }
      printf("%d ",j);
    }
    printf("\n");

    return 0;
}
