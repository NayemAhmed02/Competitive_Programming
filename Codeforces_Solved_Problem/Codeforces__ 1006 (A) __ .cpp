#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int testcase,arr[SIZE];

    while(scanf("%d", &testcase) != EOF)
    {
        for(int i=0; i<testcase; i++)
            scanf("%d", &arr[i]);
        testcase--;
        for(int i=0; i<testcase; i++)
        {
            if((arr[i] % 2) == 0)
                printf("%d ",arr[i]-1);
            else printf("%d ",arr[i]);
        }
        if((arr[testcase] % 2) == 0)
            printf("%d\n",arr[testcase]-1);
        else
            printf("%d\n",arr[testcase]);
    }
    return 0;
}
