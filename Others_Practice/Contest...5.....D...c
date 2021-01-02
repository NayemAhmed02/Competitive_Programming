#include<stdio.h>

int main()
{
    long long input,answer;

    while(scanf("%lld", &input) != EOF)
    {
        if(input % 2 == 0)
            printf("%lld\n",input/2);
        else
            printf("%lld\n",-((input/2)+1));
    }
    return 0;
}
