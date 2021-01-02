#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ar[2010],even[2010],odd[2010],sum = 0;
    int ev=0,od=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];

        if(ar[i] % 2 == 0)
        {
            even[ev] = ar[i];
            ev++;
        }
        else
        {
            odd[od] = ar[i];
            od++;
        }
    }
    if(ev == od)
    {
        cout<<"0\n";
        return 0;

    }
    else if(ev > od)
    {
        sort(even, even+ev);

        ev = ev - (od+1);
        for(int i=0; i<ev; i++)
            sum += even[i];
    }
    else
    {
        sort(odd, odd+od);

        od = od - (ev+1);
        for(int i=0; i<od; i++)
            sum += odd[i];
    }

    cout<<sum<<"\n";

    return 0;
}
