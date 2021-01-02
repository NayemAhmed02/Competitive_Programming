#include<bits/stdc++.h>
using namespace std;

#define SIZE 10000

int main()
{
    char str[SIZE],palin[SIZE];
    int i,len;

    while(gets(str))
    {
        len = strlen(str);
        for(i=0; i<len; i++)
            palin[i] = str[i];
        for(int j=len-2; j>=0; j--)
            palin[i++] = str[j];
        palin[i] = '\0';
        printf("%s\n",palin);
    }
    return 0;
}
