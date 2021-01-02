#include<stdio.h>

int main()
{
    long long int num,test,re;

    while(scanf("%lld %lld", &num, &test) != EOF)
    {
        while(test--)
        {            re = num % 10;
            if(re == 0) num = num / 10;
            else num = num - 1;
        }
        printf("%lld\n",num);
    }
    return 0;
}
