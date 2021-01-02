
// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    prime[0] = false;
    prime[1] = false;
    for(int i=4; i<=n; i+=2)
        prime[i] = false;
    int squareroot = sqrt(n);
    squareroot++;    // For get rid of Precision Error .
    for(int i=3; i<=squareroot; i+=2)
    {
        if(prime[i])
        {
            int k = i+i;
            for(int j=i*i; j<=12345678; j+=k)
                prime[j] = false;
        }
    }
    // Print all prime numbers
    for (int p=2; p<=n; p++)
        if (prime[p] == true)
            cout << p << "\n";
}

// Driver Program to test above function
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
