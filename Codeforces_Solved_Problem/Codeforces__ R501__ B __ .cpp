#include<bits/stdc++.h>
using namespace std;

#define SIZE 10010

int main()
{
    int num,arr[SIZE][2];
    int range;

    while(scanf("%d %d", &num, &range) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d %d", &arr[i][0], &arr[i][1]);

        //int def[SIZE],j = 0;

        /*for(int i=0; i<num; i++)
            def[j++] = arr[i][0] - arr[i][1];
        sort(def, def+j, greater<int>());*/

        sort()

        int k = 0;
        long long int sum=0;

        for(int i=0; i<num; i++)
        {
            sum += arr[i][0];

            if(sum > range)
            {
                while(k <= num)
                {
                    sum -= def[k];
                    k++;
                    if(sum <= range) break;
                }
            }
        }
        if(sum <= range)
            printf("%d\n",k);
        else printf("-1\n");

    }
    return 0;
}

