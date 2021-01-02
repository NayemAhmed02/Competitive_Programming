#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int flag = 0;
        for(int i=1; i<n; i++)
        {
            if(flag == 0)
            {
                printf("I hate that ");
                flag = 1;
            }
            else
            {
                printf("I love that ");
                flag = 0;
            }
        }
        if(flag == 0)
            printf("I hate it\n");
        else
            printf("I love it\n");
    }
    return 0;
}
