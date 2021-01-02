#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;

    while(scanf("%d", &n) != EOF)
    {
        x = log2(n);
        printf("%d\n",x+1);
    }
    return 0;
}
