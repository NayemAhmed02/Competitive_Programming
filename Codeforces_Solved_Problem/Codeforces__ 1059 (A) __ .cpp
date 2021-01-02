#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, total_time, break_time;
    int enter,leave,result;

    while(cin>>num)
    {
        cin>>total_time>>break_time;

        int temp = 0;
        result = 0;

        for(int i=0; i<num; i++)
        {
            cin>>enter>>leave;
            result = result + ((enter - temp) / break_time);
            temp = enter+leave;

        }
        result = result + ((total_time - temp) / break_time);

        cout<<result<<"\n";
    }
    return 0;
}
