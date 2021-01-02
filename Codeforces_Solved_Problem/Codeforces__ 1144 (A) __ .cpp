#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    char str[110];

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        int flag = 1;

        int len = strlen(str);
        sort(str, str+len);

        for(int i=1; i<len; i++)
        {
            int a = str[i] - 48;
            int b = str[i-1] - 48;

            if(a != (b+1))
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
