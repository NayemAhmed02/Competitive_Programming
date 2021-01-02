#include<stdio.h>
#include<math.h>

long long int Number[123456789];

int main()
{
    long long int start,end,squareroot,i,j,k,totalprime=0;

    // Take Range .

    printf("Enter Starting Number: ");
    scanf("%lld", &start);
    printf("Enter Ending Number: ");
    scanf("%lld", &end);

    // Sieve Of Eratosthenes .

    // First All Elements are assigned by 1...

    for(i=0; i<12345678; i++)
        Number[i] = 1;

    // Start Non prime are assigned by 0...

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

    for(i=start; i<=end; i++)
    {
        if(Number[i] == 1)
        {
            totalprime++;
            printf("%lld\t%lld\n",totalprime,i);
        }
    }
    printf("\n\n\nTotal Prime Number's: %lld\n",totalprime);

    return 0;
}
