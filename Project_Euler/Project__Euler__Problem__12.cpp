
#include <bits/stdc++.h>

// Function to print the divisors
int printDivisors(int n)
{
    int num1 = 0,s,i;
    s = sqrt(n);
    if((s*s) == n) num1--;
    for (i=1; i<=s; i++)
    {
        if (n%i == 0)
            num1 += 2;
    }
    return num1;
}

int main()
{
    int num=28,inc=8;

    while(1)
    {
        num += inc;
        int nd = printDivisors(num);
        inc++;

        if(nd > 500) break;
    }
    printf("%d\n",num);

    return 0;
}

