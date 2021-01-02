#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,base,index;
    cin>>testcase;

    while(testcase--)
    {
        cin>>base>>index;
        int LD = base % 10;

        if(index == 0)
            cout<<1<<"\n";
        else if(index % 4 == 1)
            cout<<LD<<"\n";
        else if(index % 4 == 2)
        {
            LD = (LD*LD) % 10;
            cout<<LD<<"\n";
        }
        else if(index % 4 == 3)
        {
            LD = (LD*LD*LD) % 10;
            cout<<LD<<"\n";
        }
        else if(index % 4 == 0)
        {
            LD = (LD*LD*LD*LD) % 10;
            cout<<LD<<"\n";
        }
    }
    return 0;
}
