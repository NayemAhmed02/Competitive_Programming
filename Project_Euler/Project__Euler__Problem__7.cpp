#include<iostream>
#include<cmath>
using namespace std;

long long int Number[123456789];

int main()
{
    long long int start,ended,squareroot,i,j,k,totalprime=0;

    // Take Range .

    cout<<"Enter Starting Number: ";
    cin>>start;
    cout<<"Enter Ending Number: ";
    cin>>ended;

    // Sieve Of Eratosthenes ....

    // First all elements are assigned by 1...

    for(i=0; i<12345678; i++)
        Number[i] = 1;

    // Then Non primes are assigned by 0...

    Number[0] = 0;
    Number[1] = 0;
    for(i=4; i<=12345678; i=i+2)
        Number[i] = 0;
    squareroot = sqrt(12345678);
    squareroot++;    // For get rid of Precision Error .
    for(i=3; i<=squareroot; i=i+2)
    {
        k = i+i;
        for(j=i*i; j<=12345678; j=j+k)
            Number[j] = 0;
    }

    // Print those are Prime .

    for(i=start; i<=ended; i++)
    {
        if(Number[i] == 1)
        {
            totalprime++;
            cout<<totalprime<<"\t"<<i<<"\n";
        }
        if(totalprime == 10001)
            break;
    }
    cout<<"\n\n\n"<<"Total Prime Number's: "<<totalprime<<"\n";

    return 0;
}

