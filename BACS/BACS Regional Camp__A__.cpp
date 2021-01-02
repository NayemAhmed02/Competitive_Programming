#include<bits/stdc++.h>
using namespace std;

#define SIZE 110
#define PI acos(-1)

int main()
{
    int testcase,number,arr[SIZE];

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=1; i<=testcase; i++)
        {
            scanf("%d", &number);
            for(int j=0; j<number; j++)
                scanf("%d", &arr[j]);
            int test = 0;
            for(int k=0; k<number-1; k++)
            {
                if(arr[k+1] - arr[k] == 1)
                {
                    test = 1;
                    break;
                }
            }
            if(test == 1) printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);
        }
    }
    return 0;
}
