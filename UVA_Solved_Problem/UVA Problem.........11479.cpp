#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int testcase,num1,num2,num3,i;

    while(cin >> testcase)
    {
        for(i=1; i<=testcase; i++)
        {
            cin >> num1 >> num2 >> num3;

            if(((num1+num2)<=num3) || ((num2+num3)<=num1) || ((num1+num3)<=num2))
                printf("Case %lld: Invalid\n",i);
            else if((num1 == num2) && (num2 == num3))
                printf("Case %lld: Equilateral\n",i);
            else if((num1 == num2) || (num2 == num3) || (num3 == num1))
                printf("Case %lld: Isosceles\n",i);
            else
                printf("Case %lld: Scalene\n",i);
        }
    }
    return 0;
}
