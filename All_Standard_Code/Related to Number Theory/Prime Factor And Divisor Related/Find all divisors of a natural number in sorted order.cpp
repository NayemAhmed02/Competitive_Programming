// A Better (than Naive) Solution to find all divisiors in sorted order
#include <bits/stdc++.h>

// Function to print the divisors
void printDivisors(int n)
{
    int j=0,divisor[1000];
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                printf("%d\t", i);

            else // Otherwise print both
            {
                printf("%d\t",i);
                divisor[j] = n / i;
                j++;
            }
        }
    }
    j--;
    while(j>=0)
    {
        printf("%d\t",divisor[j]);
        j--;
    }
}

/* Driver program to test above function */
int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("The divisors of %d are: \n\n\n",number);
    printDivisors(number);

    return 0;
}

