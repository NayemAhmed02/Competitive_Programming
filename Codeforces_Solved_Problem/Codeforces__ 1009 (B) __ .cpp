#include<bits/stdc++.h>
using namespace std;

#define SIZE 100010

int main()
{
    char str[SIZE];

    while(gets(str))
    {
        int total_zero=0,j=0;
        int total_one=0,total_two[SIZE],test=0;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i] == '1') total_one++;
            else if(str[i] == '2')
            {
                total_two[j++] = 2;
                test=1;
            }
            else
            {
                if(test == 1) total_two[j++] = 0;
                else total_zero++;
            }
        }
        for(int i=0; i<total_zero; i++)
            printf("0");
        for(int i=0; i<total_one; i++)
            printf("1");
        for(int i=0; i<j; i++)
            printf("%d",total_two[i]);
        printf("\n");
    }
    return 0;
}
