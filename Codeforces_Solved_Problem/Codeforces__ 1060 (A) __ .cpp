#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    char str[110];

    while(cin>>num)
    {
        cin>>str;
        int MAX = num / 11;
        int eight = 0;

        for(int i=0; i<num; i++)
            if(str[i] == '8') eight++;

        if(eight < MAX)
            MAX = eight;

        cout<<MAX<<"\n";
    }
    return 0;
}
