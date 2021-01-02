#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    while(scanf("%d %d", &n, &k) != EOF)
    {
        int MAX;

        if(n % 2 == 0) MAX = n * (n/2);
        else MAX = (n * ((n+1)/2)) - n/2;

        if(MAX < k) printf("NO\n");
        else
        {
            printf("YES\n");
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(k > 0 && (i+j) % 2 == 0)
                    {
                        printf("L");
                        k--;
                    }
                    else
                        printf("S");
                }
                printf("\n");
            }

        }
    }
    return 0;
}
