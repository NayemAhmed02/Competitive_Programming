#include<bits/stdc++.h>
using namespace std;

int findFactorial(int num)
{
    if(num == 0)
        return 1;
    int fac = findFactorial(num-1)*num;
    return fac;
}
int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int fac = findFactorial(num);
    cout<<"factorial of "<<num<<" is: "<<fac<<"\n";

    return 0;
}
