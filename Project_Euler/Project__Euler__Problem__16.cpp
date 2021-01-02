#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j = 0,carry = 0,prod[9000],ans = 0;
    prod[0] = 2;

    for(int i=0; i<999; i++)
    {
        for(int k=0; k<=j; k++)
        {
            prod[k] = (prod[k]*2) + carry;

            carry = prod[k] / 10;

            prod[k] = prod[k] % 10;

           // printf("%d\t%d\n",prod[k],carry);
        }
        if(carry > 0)
        {
            j++;
            prod[j] = carry;
            carry = 0;
        }
        //printf("%d\t%d\n",prod[j],carry);
    }
    for(int i=j; i>=0; i--)
    {
        ans += prod[i];
        printf("%d",prod[i]);
    }
    printf("\n");

    printf("%d\n",ans);

    return 0;

}
