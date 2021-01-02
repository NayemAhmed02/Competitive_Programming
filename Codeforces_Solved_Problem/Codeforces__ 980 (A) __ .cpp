#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    char str[SIZE];

    while(gets(str))
    {
        int i=0,pearl=0,link=0;

        while(str[i])
        {
            if(str[i] == '-') link++;
            else if(str[i] == 'o') pearl++;
            i++;
        }
        if(link == 0 || pearl == 0) printf("YES\n");
        else if((pearl == 2) && (link % 2 == 0)) printf("YES\n");
        else if((pearl == 2) && (link % 2 != 0)) printf("NO\n");
        else if(link >= pearl) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
