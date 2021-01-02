#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n,sum,p,m,part;

    cin>>t;
    while(t--)
    {
        cin>>n;
        m = n;
        p = 0;
        sum = 1;

        while(n % 2 == 0)
        {
            p++;
            n /= 2;
        }

        if(p>0)
        {
            part = 1;
            for(int i=0; i<=p; i++)
                part *= 2;



            part--;
            sum *= part;
            p = 0;
        }
        //cout<<sum<<"\n";
        for(int i=3; i<=sqrt(n); i+=2)
        {
            int t = i;
            while(n % i == 0)
            {
                p++;
                n /= i;
            }
           // cout<<p<<"\n";
            if(p>0)
            {
                part = 1;
                for(int j=0; j<=p; j++)
                    part *= i;
                part--;
                part /= (t-1);
                sum *= part;
                p =  0;
            }
        }

        //cout<<n<<"\n";

        if(n > 1)
        {
            part = n*n;
            part--;
            part /= (n-1);
            sum *= part;
        }
       // cout<<sum<<"\n";

        sum -= m;
        cout<<sum<<"\n";
    }
    return 0;
}

