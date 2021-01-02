#include<bits/stdc++.h>
using namespace std;

int main()
{
    int fact[9999],j=0,n,sum = 0;
    fact[0] = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=3; i<=n; i++)
    {
        int carry = 0;
        for(int k=0; k<=j; k++)
        {
            fact[k] = (fact[k] * i) + carry;

            carry = fact[k]/10;

            fact[k] %= 10;
        }
        while(carry)
        {
            j++;
            fact[j] = carry % 10;
            carry /= 10;
        }
    }

    for(int i=j; i>=0; i--)
    {
        sum += fact[i];
        printf("%d",fact[i]);
    }

    printf("\n\n\nsum of digits of factorial %d is: %d\n",n,sum);

    return 0;
}

