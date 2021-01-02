#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    char str[1010];

    while(cin>>num)
    {
        cin>>str;

        int condi = 0,i;
        num--;

        for(i=0; i<num; i++)
        {
            if(str[i] != str[i+1])
            {
                condi = 1;
                break;
            }
        }
        if(condi == 1)
        {
            cout<<"YES\n";
            cout<<str[i]<<str[i+1]<<"\n";
        }
        else
            cout<<"NO\n";

    }
    return 0;
}
