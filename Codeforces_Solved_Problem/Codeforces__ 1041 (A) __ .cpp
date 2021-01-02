#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[1010];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &arr[i]);

        sort(arr, arr+num);

        int result = (arr[num-1] + 1) - (arr[0] + num);

        printf("%d\n",result);
    }
    return 0;
}
