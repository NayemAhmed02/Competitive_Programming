#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[200010],ele;

    while(scanf("%d", &num) != EOF)
    {
        for(int i=1; i<=num; i++)
        {
            scanf("%d", &ele);
            arr[ele] = i;
        }
        int prev = 0;

        for(int i=1; i<=num; i++)
        {
            scanf("%d", &ele);

            if(arr[ele] > prev)
            {
                printf("%d ",arr[ele]-prev);
                prev = arr[ele];
            }
            else
                printf("0 ");
        }
    }
    return 0;
}
