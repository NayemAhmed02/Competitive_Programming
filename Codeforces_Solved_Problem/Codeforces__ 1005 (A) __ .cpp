#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int elem,arr[SIZE],total,result[SIZE];

    while(scanf("%d", &elem) != EOF)
    {
        for(int i=0; i<elem; i++)
            scanf("%d", &arr[i]);
        total = 0;
        int j = 0;
        for(int i=0; i<elem; i++)
        {
            if(arr[i] == 1)
            {
                total++;
                if(i != 0) result[j++] = arr[i-1];
            }
        }
        result[j] = arr[elem-1];
        printf("%d\n",total);
        for(int i=0; i<j; i++)
            printf("%d ",result[i]);
        printf("%d\n",result[j]);

    }
    return 0;
}
