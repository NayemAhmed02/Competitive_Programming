#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    while(scanf("%d", &num) != EOF)
    {
        if(num % 3 == 0)
        {
            int d = num / 3;

            if(d % 3 != 0)
                printf("%d %d %d\n",d,d,d);
            else
            {
                printf("%d %d %d\n",d-1,d-1,d+2);
            }
        }
        else
        {
            int d = num / 3;
            int sum = 3*d;
            int dif = num - sum;


            if(d % 3 == 0)
            {
                if(dif == 1)
                {
                    printf("%d %d %d\n",d+1,d+1,d-1);
                }
                else
                    printf("%d %d %d\n",d+2,d+1,d-1);
            }
            else
            {
                int de = d / 3;
                int sum2 = de * 3;
                int dif2 = d - sum2;
                if(dif == 1)
                {
                    if(dif2 == 1)
                        printf("%d %d %d\n",d+1,d,d);
                    else
                        printf("%d %d %d\n",d+3,d-1,d-1);
                }
                else
                {
                    if(dif2 == 1)
                    {
                        printf("%d %d %d\n",d+1,d+1,d);
                    }
                    else
                        printf("%d %d %d\n",d-1,d,d+3);
                }
            }
        }
    }
    return 0;

}

