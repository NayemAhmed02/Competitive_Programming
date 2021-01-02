#include<stdio.h>
#include<math.h>

long long int ar[100000000];

int main()
{
    long long int start,end,sq,i,j,k,p,totalprime=0;
    printf("Enter The Range: ");
    scanf("%lld %lld", &start, &end);

    for(i=start; i<=end; i++)
        ar[i] = 1;
    ar[0]=0,ar[1]=0;
    sq = sqrt(end);
    p=2;
    for(i=4; i<=end; i=2*p)
    {
        ar[i] = 0;
        p++;
    }
    for(i=3; i<=sq; i=i+2)
    {
        p = 3;
        for(j=3*i; j<=end; j=i*p)
        {
           ar[j] = 0;
           p++;
           p++;
        }
    }
    for(i=start; i<=end; i++)
        if(ar[i] == 1) totalprime++;
    printf("\n\n\nTotal Prime Number From %lld To %lld: %lld\n\n\n",start,end,totalprime);
    printf("These Are In Serially : \n\n");
    k = 1;
    for(i=start; i<=end; i++)
    {
        if(ar[i] == 1)
        {
            printf("%lld.\t%lld\n",k,i);
            k++;
        }
    }
    return 0;
}
