#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[110];

    while(scanf("%d", &num) != EOF)
    {
        arr[0] = -10;
        for(int i=1; i<=num; i++)
            scanf("%d", &arr[i]);

        sort(arr,arr+num+1);

        if(num % 2 == 0)
        {
            int def = 1;
            printf("YES\n");
            for(int i=1; i<=num; i++)
            {
                if(arr[i] != arr[i-1]) def++;
                if(def % 2 == 0) printf("B");
                else printf("A");
            }
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
