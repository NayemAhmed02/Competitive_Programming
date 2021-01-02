#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[25];

    while(scanf("%s", &str) != EOF)
    {
        int total = 0;
        for(int i=0; str[i]; i++)
        {
            if(str[i] == '4' || str[i] == '7')
                total++;
        }
        if(total == 4 || total == 7)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
