#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    char str[110];

    while(scanf("%d", &k) != EOF)
    {
        scanf("%s", &str);
        int len = strlen(str);
        int num = 0,condi;
        int distin[110];

        for(int i=0; str[i]; i++)
        {
            condi = 1;
            for(int j=i-1; j>=0; j--)
            {
                if(str[i] == str[j]) condi = 0;
            }
            if(condi == 1) distin[num++] = i;
        }
        if(num < k) printf("NO\n");
        else
        {
            int p = 1;
            printf("YES\n");
            for(int i=0; str[i]; i++)
            {
                printf("%c",str[i]);

                if(i == (distin[p]-1) && k > 1)
                {
                    printf("\n");
                    p++;
                    k--;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
