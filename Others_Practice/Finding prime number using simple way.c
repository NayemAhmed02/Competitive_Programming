#include<stdio.h>
#include<math.h>

int main()
{
    long long int start,end,sqr,i,j,t,totalprime=0;
    printf("Enter Prime Number Range: ");
    scanf("%lld %lld", &start, &end);

    for(i=start; i<=end; i++)
    {
        sqr = sqrt(i);
        t=0;

        for(j=2; j<=sqr; j++)
        {
            if(i % j == 0)
                t=1;
        }
        if(i == 1 || i == 0) t = 1;
        if(t==0)
        {
            //printf("%lld\n",i);
            totalprime++;
        }
    }
    printf("Total Prime Number: %lld\n",totalprime);
    return 0;
}
