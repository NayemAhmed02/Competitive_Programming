#include<bits/stdc++.h>
using namespace std;
#define n 100002
bool Number[n];

int sieve(int a, int b)
{
    int nonp=0;
    memset(Number, true, sizeof(Number));

    // Then Non primes are assigned by 0...

    Number[0] = false;
    Number[1] = false;
    for(int i=4; i<=n; i+=2)
    {
        Number[i] = false;
        if(i>=a && i<=b)
            nonp++;
    }
    int squareroot = sqrt(n);
    squareroot++;    // For get rid of Precision Error .
    for(int i=3; i<=squareroot; i+=2)
    {
        int k = i+i;
        for(int j=i*i; j<=n; j+=k)
        {
            Number[j] = false;
            if(i>=a && i<=b)
                nonp++;
        }
    }
    if(a == 1)
        nonp++;
    return nonp;

}

int main()
{
    int testcase,a,b;
    cin>>testcase;

    while(testcase--)
    {
        cin>>a>>b;
        if(a > b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        int res = sieve(a, b);

        cout<<res<<"\n";
    }
    return 0;
}
