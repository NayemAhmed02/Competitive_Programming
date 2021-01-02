#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0,n = 0,m = 1;

    for(int i=1; m <= 4000000; i++)
    {
        int temp = m;
        m += n;
        n = temp;
        printf("%d = %d\n",i,m);
        if(m % 2 == 0)
            sum += m;
    }

    printf("%d\n",sum);


    return 0;
}
