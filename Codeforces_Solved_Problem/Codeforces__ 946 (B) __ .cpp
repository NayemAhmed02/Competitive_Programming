#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num1,num2;

    while(scanf("%lld %lld", &num1, &num2) != EOF)
    {
        while(1)
        {
            if(num1 == 0 || num2 == 0) break;
            else if(num1 >= (2*num2))
            {
                long long int dis = num1 / (num2*2);
                num1 = num1 - (dis * num2 * 2);
            }
            else if(num2 >= (2*num1))
            {
                long long int dis = num2 / (2*num1);
                num2 = num2 - (dis * num1 * 2);
            }
            else break;
        }
        printf("%lld %lld\n",num1, num2);
    }
    return 0;
}
