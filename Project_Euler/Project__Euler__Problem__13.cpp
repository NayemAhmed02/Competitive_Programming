#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n=2;
    int MAXI = 0,MAXNUM;

    while(n < 1000001)
    {
        int coun = 1;
        long long int num = n;

        while(num != 1)
        {
            if(num % 2 == 0)
                num /= 2;
            else
                num = (3*num) + 1;
            coun++;
        }
        if(coun > MAXI)
        {
            MAXI = coun;
            MAXNUM = n;
        }
        n++;
    }
    printf("%d\n",MAXNUM);

    return 0;
}
