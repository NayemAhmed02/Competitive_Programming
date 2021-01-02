#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    while(scanf("%d", &num) != EOF)
    {
        int sum = 0,height,total = 0;
        for(height=1; total <= num; height++)
        {
            sum += height;
            total += sum;
        }
        printf("%d\n",height-2);

    }
    return 0;
}
