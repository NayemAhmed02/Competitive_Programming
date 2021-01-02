#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[1010];

    while(scanf("%s", &str) != EOF)
    {
        str[0] = toupper(str[0]);
        printf("%s\n",str);
    }
    return 0;
}
