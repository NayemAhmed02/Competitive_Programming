#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[100010],arr2[100010];

    while(scanf("%d", &num) != EOF)
    {
        int MIN = INT_MAX;
        for(int i=0; i<num; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i] < MIN)
                MIN = arr[i];

        }
        int j=0;

        while(arr[j] != MIN)
            j++;

        int p = j;
        int MIN_DIS = INT_MAX;

        for(int i=j+1; i<num; i++)
        {
            if(arr[i] == MIN)
            {
                int diffe = i-p;
                p = i;
                if(diffe < MIN_DIS)
                    MIN_DIS = diffe;
            }
        }
        printf("%d\n",MIN_DIS);
    }
    return 0;
}
