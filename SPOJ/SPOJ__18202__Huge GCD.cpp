#include<bits/stdc++.h>
using namespace std;

#define MAX 500000

int nap[MAX],mapp[MAX],common[MAX];
int j=0,k=0;

int multiply(int x, int res[], int res_size);

void factorial(int num)
{
    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x=0; x<num; x++)
        res_size = multiply(common[x], res, res_size);

    int i = res_size-1;
    if(i > 8)
        i = 8;


    for (; i>=0; i--)
        cout<<res[i];
    cout<<"\n";
}


int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;

        res[i] = prod % 10;

        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

void primeFactors(int n)
{
    int i;
    while (n%2 == 0)
    {
        nap[j++] = 2;
        n = n/2;
    }
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            nap[j++] = i;
            n = n/i;
        }
    }
    if (n > 2)
        nap[j++] = n;
}

void primeFactors2(int n)
{
    int i;
    while (n%2 == 0)
    {
        mapp[k++] = 2;
        n = n/2;
    }

    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            mapp[k++] = i;
            n = n/i;
        }
    }

    if (n > 2)
        mapp[k++] = n;
}


int main()
{
    int n,m;
    cin>>n;
    int na[n];
    for(int i=0; i<n; i++)
    {
        cin>>na[i];
        primeFactors(na[i]);
    }

    cin>>m;
    int ma[m];
    for(int i=0; i<m; i++)
    {
        cin>>ma[i];
        primeFactors2(ma[i]);
    }
    int l = 0;
    for(int x=0; x<j; x++)
    {
        for(int y=0; y<k; y++)
        {
            if(nap[x] == mapp[y])
            {
                common[l++] = nap[x];
                mapp[y] = 0;
                break;
            }
        }
    }

    factorial(l);
    return 0;
}
