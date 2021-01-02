#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,num;

    cin>>testcase;

    while(testcase--)
    {
        cin>>num;
        int num_one = __builtin_popcount(num);
        int result = pow(2, num_one);
        cout<<result<<"\n";
    }
    return 0;
}
