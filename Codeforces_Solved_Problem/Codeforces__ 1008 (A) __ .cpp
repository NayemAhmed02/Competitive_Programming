#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    char str[SIZE];

    while(gets(str))
    {
        int test = 0;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i] == 'n') test = 1;
            else if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            {
                if(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u') test = 1;
                else test = 2;
            }
            if(test == 2) break;
        }
        if(test == 2) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
