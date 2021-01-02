#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[110],str2[110];

    while(scanf("%s %s", &str1, &str2) != EOF)
    {
        for(int i=0; str1[i]; i++)
        {
            if(str1[i] == str2[i]) printf("0");
            else  printf("1");
        }
        printf("\n");
    }
    return 0;
}
