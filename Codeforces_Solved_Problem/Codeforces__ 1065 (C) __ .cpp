#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[200009];

    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);
    int j = 1;

    while(arr[j] == arr[0])
        j++;

    for(int i=j; i<n; i++)
    {
        sum += (arr[i]-arr[0]);
        if(sum)

    }
}
