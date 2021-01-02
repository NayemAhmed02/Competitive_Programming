#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int row,column;
    unsigned long long int ans;

    while(scanf("%lld %lld", &row, &column) != EOF)
    {
        ans = (row-1) + (column-1);

        ans *= 2;

        cout<<ans<<"\n";
    }
    return 0;
}
