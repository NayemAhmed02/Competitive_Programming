#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[200009];

    while(scanf("%d", &n) != EOF)
    {
        scanf("%s", &str);

        if(str[n-1] < str[n-2])
        {
            int m = n-2;

            for(int i=0; i<m; i++)
                printf("%c", str[i]);
            printf("%c\n",str[n-1]);
        }

        else
        {
            int m = n-1;

            for(int i=0; i<m; i++)
                printf("%c", str[i]);
            printf("\n");
        }
    }
    return 0;
}
