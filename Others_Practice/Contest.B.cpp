#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[110];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &arr[i]);

        int total = 0;
        sort(arr, arr+num);

        for(int j=0; j<num-1; j++)
        {
            if(arr[j] != 0)
            {
                if(arr[j+1] != arr[j])
                    total++;
            }
        }
        printf("%d\n",total+1);
    }
    return 0;
}
