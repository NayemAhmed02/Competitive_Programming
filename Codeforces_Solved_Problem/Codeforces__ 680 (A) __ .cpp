#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t[6],sum=0,maxi=0,dif=0;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &t[i]);
        sum += t[i];
    }

    sort(t, t+5);

    t[5] = 0;

    for(int i=1; i<5; i++)
    {
        if((t[i] == t[i-1]) && (t[i] == t[i+1]))
            dif = t[i-1]+t[i]+t[i+1];
        else if(t[i] == t[i-1])
            dif = t[i-1]+t[i];
        if(dif > maxi)
            maxi = dif;
    }
    printf("%d\n",sum-maxi);

    return 0;
}
