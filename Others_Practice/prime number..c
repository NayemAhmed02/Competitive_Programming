#include<stdio.h>
#include<math.h>

int main()
{
    int N,sq,ar[100000],i,p,j;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
        ar[i] = 1;
    sq = sqrt(N);
    p=2;
    for(i=4; i<=N; i=2*p)
    {
        ar[i] = 0;
        p++;
    }
    for(i=3; i<=sq; i=i+2)
    {
        p = 3;
        for(j=3*i; j<=N; j=i*p)
        {
           ar[j] = 0;
           p++;
           p++;
        }
    }
    for(i=2; i<=N; i++)
    {
        if(ar[i] == 1)
            printf("%d\n",i);
    }
}
