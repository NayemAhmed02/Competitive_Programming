#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,sample,lower,higher,result;

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d %d %d", &lower, &higher, &sample);
            if(lower > higher)
            {
                int temp = lower;
                lower = higher;
                higher = temp;
            }
            result = 0;
            for(i=lower; i<=higher; i++)
            {
                num = i;
                while(num > 0)
                {
                    mul = 1;

                    while(num > 0)
                    {
                        re = num % 10;
                        if(re > 0) mul = mul * re;
                        num = num / 10;
                    }
                    if(mul > 9) num = mul;
                }
                if(mul == sample)
                {
                    result++;
                }
            }
            printf("%d\n",result);
        }
    }
    return 0;
}
