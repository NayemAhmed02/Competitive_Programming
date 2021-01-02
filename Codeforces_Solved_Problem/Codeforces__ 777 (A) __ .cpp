#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x;

    while(cin>>n>>x)
    {
        int mod = n % 6;

        if(mod == 1)
        {
            if(x == 1)
                printf("0\n");
            else if(x == 0)
                printf("1\n");
            else
                printf("2\n");
        }
        else if(mod == 2)
        {
            if(x == 2)
                printf("0\n");
            else if(x == 0)
                printf("1\n");
            else
                printf("2\n");
        }
        else if(mod == 3)
        {
            if(x == 2)
                printf("0\n");
            else if(x == 1)
                printf("1\n");
            else
                printf("2\n");
        }
        else if(mod == 4)
        {
            if(x == 1)
                printf("0\n");
            else if(x == 2)
                printf("1\n");
            else
                printf("2\n");
        }
        else if(mod == 5)
        {
            if(x == 0)
                printf("0\n");
            else if(x == 2)
                printf("1\n");
            else
                printf("2\n");
        }
        else if(mod == 0)
        {
            if(x == 0)
                printf("0\n");
            else if(x == 1)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
