#include<bits/stdc++.h>
using namespace std;

#define sz 500000
#define inf 1000000000
int arr[sz+2],Left[sz+2],Right[sz+2];

void merge(int l,int m,int r)
{
    int i,j,k,ind1,ind2;

    for(i = l,ind1 = 1; i <= m; i++)
    {
        Left[ind1++] = arr[i];
    }
    Left[ind1] = inf;

    for(i = m+1,ind2 = 1; i <= r; i++)
    {
        Right[ind2++] = arr[i];
    }
    Right[ind2] = inf;

    i = j = 1;

    for(k = l; k <= r; k++)
    {
        if(Left[i] > Right[j])
        {
            arr[k] = Right[j];
            j++;
        }
        else
        {
            arr[k] = Left[i];
            i++;
        }
    }
}

void MergeSort(int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        MergeSort(l,m);
        MergeSort(m+1,r);
        merge(l,m,r);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    cout<<"Before Sorted: ";
    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";

    MergeSort(1, n);

    cout<<"After Sorted: ";
    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";

    return 0;

}
