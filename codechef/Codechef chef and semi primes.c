#include<stdio.h>
#include<math.h>

int main()
{
    int arr[210],prime[50],semiprime[210];
    int i,j,k,p,squareroot,condition,num,t;

    // First find all prime between 1 to 200

    for(i=0; i<201; i++)
        arr[i] = 1;

    arr[0] = 0;
    arr[1] = 0;

    for(j=4; j<201; j+=2)
        arr[j] = 0;

    squareroot = sqrt(205);
    squareroot++;    // For get rid of Precision Error .
    for(i=3; i<=squareroot; i+=2)
    {
        k = i+i;
        for(j=i*i; j<201; j=j+k)
            arr[j] = 0;
    }

    j = 0;

    for(i=0; i<201; i++)
        if(arr[i] == 1)
        {
            prime[j++] = i;
        }

    // Second find the all semi prime between 1 to 200

    p = 0;
    for(i=0; i<j; i++)
    {
        for(k=i+1; k<j; k++)
        {
            if((prime[i] * prime[k]) > 200)
                break;
            else
                semiprime[p++] = prime[i] * prime[k];
        }
    }


    // Finally check given condition is true or false


    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &num);
        condition = 0;

        for(i=0; i<p; i++)
        {
            for(j=i; j<p; j++)
            {
                if(semiprime[i] + semiprime[j] == num)
                {
                    condition = 1;
                    break;
                }
            }
            if(condition == 1) break;
        }
        if(condition == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}
