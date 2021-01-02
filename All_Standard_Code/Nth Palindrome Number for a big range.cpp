#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,palin[SIZE],rev,range;
    char num[40];

    while(scanf("%d", &range) != EOF)
    {
        int j = 0,re;
        for(int i=1; j<100; i++)
        {
            num = i;
            rev = 0;
            while(num > 0)
            {
                re = num % 10;
                rev = (rev * 10) + re;
                num = num / 10;
            }
            if(i == rev) palin[j++] = i;
        }
        printf("%dth Palindrome Number is: %d\n",range,palin[range-1]);

    }
    return 0;
}

