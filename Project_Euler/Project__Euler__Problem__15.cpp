#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ans=0,p=20,matr[20][20];

    for(int i=0; i<19; i++)
    {
        matr[i][0] = p;
        p--;
    }

    for(int i=1; i<18; i++)
    {
        for(int j=0; j<19; j++)
        {
            long long int sum = 0;
            for(int k=j; k<19; k++)
            {
                sum += matr[k][i-1];
            }
            matr[j][i] = sum+1;
        }
    }
    for(int i=0; i<19; i++)
    {
        for(int j=0; j<18; j++)
        {
            ans += matr[i][j];
            printf("%lld\t",matr[i][j]);
        }
        printf("\n");
    }
    ans += 39;
    ans *= 2;

    printf("%lld\n",ans);

    return 0;
}
