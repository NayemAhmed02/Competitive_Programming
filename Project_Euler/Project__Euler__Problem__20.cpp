#include<bits/stdc++.h>
using namespace std;

int main()
{
    int fact[9999],f1[9999],f2[9999],j=0;
    fact[0] = 2;

    for(int i=3; i<100; i++)
    {
        int carry = 0;
        if(i < 10)
        {
            for(int k=0; k<=j; k++)
            {
                fact[k] = (fact[k] * i) + carry;

                carry = fact[k]/10;

                fact[k] %= 10;
            }
            if(carry > 0)
            {
                j++;
                fact[j] = carry;
                carry = 0;
            }
        }
        else if(i < 100)
        {
            int p = i,c1 = 0,c2 = 0,k;
            int a = p % 10;
            p /= 10;
            for(k=0; k<=j; k++)
            {
                f1[k] = (fact[k] * a) + c1;
                f2[k] = (fact[k] * p) + c2;

                c1 = f1[k]/10;
                c2 = f2[k]/10;

                f1[k] %= 10;
                f2[k] %= 10;
            }
            if(c1 > 0)
            {
                f1[k] = c1;
                c1 = 0;
                if(c2 > 0)
                {
                    f2[k] = c2;
                    c2 = 0;
                }
                else
                    f2[k] = 0;
            }
            else if(c2 > 0 && c1 == 0)
            {
                f2[k] = c2;
                f1[k] = 0;
                c2 = 0;
            }
            fact[0] = f1[0];

            for(int i=1; i<=k; i++)
            {
                fact[i] = f1[i] + f2[i-1] + carry;

                carry = fact[i] / 10;

                fact[i] %= 10;
            }
            k++;
            fact[k] = carry + f2[k-1];
            carry = fact[k] / 10;
            fact[k] %= 10;

            if(carry > 0)
            {
                k++;
                fact[k] = carry;
                carry = 0;
            }
            j = k;

        }
    }
    int sum = 0;
    for(int i=j; i>=0; i--)
            sum += fact[i];

    printf("%d\n",sum);
    return 0;
}
