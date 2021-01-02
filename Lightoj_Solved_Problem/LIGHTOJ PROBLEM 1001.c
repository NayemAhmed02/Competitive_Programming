#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    int T[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&T[i]);
    }
     for(i=0; i<n; i++)
    {
        k = 0;
        for(j=i-1; j>=0; j--)
        {
            if(T[i]==T[j])
                k++;
        }
        printf("%d %d\n",k,T[i]-k);
    }
    return 0;
}
