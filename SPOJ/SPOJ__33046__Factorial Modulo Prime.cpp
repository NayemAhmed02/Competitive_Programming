// C++ program to comput n! % p using Wilson's Theorem
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Utility function to do modular exponentiation.
// It returns (x^y) % p
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
    x = x % p; // Update x if it is more than or
    // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n! % p using Wilson's Theorem
ll modFact(ll n, ll p)
{
    // n! % p is 0 if n >= p
    if (n >= p)
        return 0;

    // Initialize result as (p-1)! which is -1 or (p-1)
    ll res = (p - 1);

    // Multiply modulo inverse of all numbers from (n+1)
    // to p
    for (ll i = n + 1; i < p; i++)
        res = (res * power(i, p-2, p)) % p;
    return res;
}

// Driver method
int main()
{
    ll testcase,n,p;
    cin>>testcase;
    while(testcase--)
    {
        cin>>n>>p;
        cout << modFact(n, p)<<"\n";
    }
    return 0;
}
