#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[101];
    cin>>t;

    while(t--)
    {
        int sum=0,numOfZero=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] == 0)
                numOfZero++;
            sum += arr[i];
        }
        int result = numOfZero;
        sum += numOfZero;

        if(sum == 0)
            result++;
        cout<<result<<"\n";
    }
    return 0;
}
