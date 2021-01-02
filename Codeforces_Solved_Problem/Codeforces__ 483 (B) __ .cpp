#include<bits/stdc++.h>
using namespace std;

#define SIZE 102

int main()
{
    int i,j,k,l,n,m,as,sum,sum1,determine;
    char str[SIZE][SIZE];

    while(scanf("%d %d", &n, &m) != EOF)
    {
        getchar();
        for(int p=0; p<n; p++)
            gets(str[p]);
        sum = 0;
        sum1 = 0;
        determine = 1;
        as = 0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(str[i][j] == '*')
                {
                    as++;
                    for(k=i-1; k<=i+1; k++)
                    {
                        for(l=j-1; l<=j+1; l++)
                        {
                            if((k >= 0 && k < n) && (l>= 0 && l < m)) sum++;
                        }
                    }
                }
                /*else if(str[i][j] == '.')
                {
                    for(k=i-1; k<=i+1; k++)
                    {
                        for(l=j-1; l<=j+1; l++)
                        {
                            if((k >= 0 && k < n) && (l>= 0 && l < m))
                            {
                                if(str[k][l] != '.') determine = 0;
                            }
                        }
                    }
                }*/
                else if(str[i][j]>=48 && str[i][j]<=57)
                    sum1 = (str[i][j] - 48) + sum1;
            }
        }
        sum = sum - as;
        if(sum != sum1) determine = 0;
        if(as == (n*m)) printf("NO\n");
        else if(determine == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

