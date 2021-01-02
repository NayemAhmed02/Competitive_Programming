#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double a,b,c;

    while(cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            cin>>a>>b>>c;

            if(((b-a)==(c-b)) && ((b/a)==(c/b)))
                cout<<"Both\n";
            else if((b-a) == (c-b))
                cout<<"Arithmetic\n";
            else if((b/a)==(c/b))
                cout<<"Geometric\n";
            else
                cout<<"None\n";
        }
    }
    return 0;
}
