// C++ program to print the least prime factors
// of numbers less than or equal to
// n using modified Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;

void leastPrimeFactor(int n)
{
    int least_prime[n+1];
    // Initialize all entries as 0.
    memset(least_prime, 0, sizeof(least_prime));

    least_prime[1] = 1;
    for(int i=4; i<=n; i+=2)
        least_prime[i] = 2;
    int squareroot = sqrt(n);
    squareroot++;    // For get rid of Precision Error .
    for(int i=3; i<=squareroot; i+=2)
    {
        if(least_prime[i] == 0)
        {
            int k = i+i;
            for(int j=i*i; j<=n; j+=k)
                if(least_prime[j] == 0) least_prime[j] = i;
        }
    }
    // print least prime factor of
    // of numbers till n
    for (int i = 1; i <= n; i++)
    {
        if(least_prime[i] == 0)
            printf("Least Prime Of %d is:  %d\n",i,i);
        else
            printf("Least Prime Of %d is:  %d\n",i,least_prime[i]);
    }
}

// Driver program to test above function
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    leastPrimeFactor(n);
    return 0;
}
