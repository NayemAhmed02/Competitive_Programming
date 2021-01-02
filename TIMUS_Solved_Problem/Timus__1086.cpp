#include<bits/stdc++.h>
using namespace std;

#define SIZE 170000
#define SIZ 15100

int main()
{
    int Number[SIZE],testcase,num,prime[SIZ],p=0;

    for(int i=0; i<170000; i++)
        Number[i] = 1;

    // Then Non primes are assigned by 0...

    Number[0] = 0;
    Number[1] = 0;
    for(int i=4; i<170000; i=i+2)
        Number[i] = 0;
    int squareroot = sqrt(170000);
    squareroot++;    // For get rid of Precision Error .
    for(int i=3; i<=squareroot; i=i+2)
    {
        int k = i+i;
        for(int j=i*i; j<170000; j=j+k)
            Number[j] = 0;
    }

    // Print those are Prime .

    for(int i=0; i<170000; i++)
        if(Number[i] == 1) prime[p++] = i;
    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d", &num);
            printf("%d\n",prime[num-1]);
        }
    }
    return 0;
}
