#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,ele[100009],MAX;

    while(cin>>num)
    {
        cin>>ele[0];
        int sample = 1;
        MAX = 0;

        for(int i=1; i<num; i++)
        {
            cin>>ele[i];

            if(ele[i] >= ele[i-1]) sample++;

            else
            {
                if(sample > MAX) MAX = sample;
                sample = 1;
            }

        }
        if(sample > MAX) MAX = sample;
        cout<<MAX<<"\n";
    }
    return 0;
}
