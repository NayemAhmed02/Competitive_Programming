#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,sum;
    while(scanf("%d", &num) != EOF)
    {
        if(num == 0) sum = 1;
        else if(num > 0) sum = (num*(num+1)) / 2;
        else sum = -(((num*(num-1)) / 2) - 1);
        printf("%d\n",sum);
    }
    return 0;
}
