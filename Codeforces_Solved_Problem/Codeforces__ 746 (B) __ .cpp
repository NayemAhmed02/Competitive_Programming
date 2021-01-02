#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch[2010];

    while(scanf("%d", &n) != EOF)
    {
        scanf("%s", &ch);
        int j = 1;

        for(int i=n-2; i>=0; i-=2)
            printf("%c", ch[i]);

        if(n % 2 != 0)
        {
            printf("%c", ch[0]);
            j = 2;
        }

        while(j < n)
        {
            printf("%c", ch[j]);
            j += 2;
        }
        printf("\n");
    }
    return 0;
}
