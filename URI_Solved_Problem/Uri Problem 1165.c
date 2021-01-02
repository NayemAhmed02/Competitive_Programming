#include<stdio.h>

int main()
{
    int N,X,K,I,J;
    scanf("%d",&N);

    for(K=1; K<=N; K++)
    {
        J = 0;
      scanf("%d",&X);
      if(X == 1)printf("1 nao eh primo\n");
      else
      {

        for(I=2; I<X; I++)
        {

          if(X % I == 0)
          {
            J++;
            if(J == 1)
            {
                printf("%d nao eh primo\n",X);
                break;
            }
          }
        }
    if(J == 0)
    {
        printf("%d eh primo\n",X);
    }
    }
    }
    return 0;
}

