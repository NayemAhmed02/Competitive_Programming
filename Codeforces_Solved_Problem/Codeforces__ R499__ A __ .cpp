#include<bits/stdc++.h>
using namespace std;

#define SIZE 60

int main()
{
    int n,k;
    char str[SIZE];

    while(scanf("%d %d", &n, &k) != EOF)
    {
        getchar();
        gets(str);
        sort(str,str+n);
        int test = 1,miw = str[0] - 96;
        int num2 = str[0];
        for(int i=1; i<n; i++)
        {
            if(test == k) break;
            int num1 = str[i];
            if(num1 > (num2+1))
            {
                miw += str[i] - 96;
                num2 = str[i];
                test++;
            }
        }
        if(test == k)
            printf("%d\n",miw);
        else
            printf("-1\n");
    }
    return 0;
}
