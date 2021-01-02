#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    int n,m,de,arr[SIZE],str[SIZE];

    while(scanf("%d %d", &n, &m) != EOF)
    {
        for(int i=0; i<m; i++)
            scanf("%d", &arr[i]);
        sort(arr, arr+m);
        int k,l = 0;
        for(int j=0; j<m; )
        {
            k = j;
            str[l] = 0;
            while(arr[j] == arr[k] && j<m)
            {
                str[l]++;
                j++;
            }
            l++;
        }
        sort(str, str+l, greater<int>());
        de = 0;
        for(int i=100; i>0; i--)
        {
            int sum = 0;
            for(int j=0; j<l; j++)
            {
                int re = str[j] / i;
                sum += re;
            }
            if(sum >= n)
            {
                de = i;
                break;
            }
        }
        if(de != 0) printf("%d\n",de);
        else printf("0\n");
    }
    return 0;
}
