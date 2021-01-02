#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100009],str2[100009];
    int len1,len2,maximum;

    while(scanf("%s %s", &str, &str2) != EOF)
    {
        if(strcmp(str, str2) == 0)
            printf("-1\n");
        else
        {
            len1 = strlen(str);
            len2 = strlen(str2);

            maximum = max(len1, len2);

            printf("%d\n",maximum);
        }
    }
    return 0;
}
