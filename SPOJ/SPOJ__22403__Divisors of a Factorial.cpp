#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

int all_primes[50009],ind = 0;
bool Number[50009];

void sieve()
{
    memset(Number, true, sizeof(Number));

    // Then Non primes are assigned by 0...

    Number[0] = false;
    Number[1] = false;
    for(int i=4; i<=50000; i+=2)
        Number[i] = false;
    int squareroot = sqrt(50000);
    squareroot++;    // For get rid of Precision Error .
    for(int i=3; i<=squareroot; i+=2)
    {
        int k = i+i;
        for(int j=i*i; j<=50000; j+=k)
            Number[j] = false;
    }

    // Print those are Prime .

    for(int i=2; i<=50000; i++)
    {
        if(Number[i] == true)
        {
            all_primes[ind++] = i;
        }
    }
}

// Function to find all result of factorial number
ull factorialDivisors(ull N)
{
    // Initialize result
    ull result = 1;

    // find exponents of all primes which divides n
    // and less than n
    for (int i=0; i<ind; i++)
    {
        if(all_primes[i] > N)
            break;
        // Current divisor
        ull p = all_primes[i];

        // Find the highest power (stored in exp)'
        // of allPrimes[i] that divides n using
        // Legendre's formula.
        ull exp = 0;
        while (p <= N)
        {
            exp = exp + (N/p);
            p = p*all_primes[i];
        }

        // Multiply exponents of all primes less
        // than n
        result = (result*(exp+1)) % 1000000007;
    }

    // return total divisors
    return result;
}


int main()
{
    ull t,n;
    cin>>t;
    sieve();

    while(t--)
    {
        cin>>n;
        ull ans = factorialDivisors(n);
        cout<<ans<<"\n";
    }
    return 0;
}
