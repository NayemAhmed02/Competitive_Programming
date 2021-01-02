#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char a[110];

    while(cin>>n)
    {
        cin>>a;

        int pa = 0;
        for(int i=0; i<n-1; )
        {
            if(a[i]=='R' && a[i+1]=='U')
            {
                pa++;
                i += 2;
            }
            else if(a[i]=='U' && a[i+1]=='R')
            {
                pa++;
                i += 2;
            }
            else
                i++;
        }
        int t = n - (pa*2);
        cout<<t+pa<<"\n";
    }
    return 0;
}
