#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000
#define PI acos(-1)

int main()
{
    int testcase,F,gcd;

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d %d",&F, &gcd);
            int num = F*gcd;
            int num1=num,sqroot = sqrt(num);
            sqroot++;
            int divisor[SIZE],udivisor[SIZE],j = 0,l = 0,total = 0,k;
            for(int i=1; i<=sqroot; i++)
            {
                if (num%i == 0)
                {
                    if (num/i == i)
                        divisor[j++] = i;

                    else
                    {
                        divisor[j++] = i;
                        divisor[j++] = num / i;
                    }
                }
            }
            sort(divisor,divisor+j);
            j--;
            for(k=0; k<j; k++)
                if(divisor[k] != divisor[k+1])
                    udivisor[l++] = divisor[k];
            udivisor[l] = divisor[j];
            for(int p=0; p<=l; p++)
            {
                if(udivisor[p] % gcd == 0)
                {

                    for(int q=p; q<=l; q++)
                    {
                        if(udivisor[q] % gcd == 0)
                        {

                            for(int r=q; r<=l; r++)
                            {
                                if(udivisor[r] % gcd == 0)
                                {
                                    int test = udivisor[p]*udivisor[q]*udivisor[r];

                                    if((test / gcd) == F)
                                    {
                                        total++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            printf("%d\n",total);
        }
    }
    return 0;
}
