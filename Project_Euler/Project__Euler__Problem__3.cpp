#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num = 600851475143,sq,i;

    sq = sqrt(num);
    sq++;

    for(i=2; i<=sq; i++)
    {
        while(num % i == 0)
        {
            num /= i;
        }
        sq = sqrt(num);
        sq++;
    }
    cout<<num;

    return 0;
}
