#include<bits/stdc++.h>
using namespace std;

#define SIZE 5010

int main()
{
    int num,palne[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &palne[i]);
        int test,test1,test2,sample = 0;
        for(int i=0; i<num; i++)
        {
            test = palne[i];
            test1 = palne[test-1];
            test2 = palne[test1-1];

            if(test2 == (i+1))
            {
                sample = 1;
                break;
            }
        }
        if(sample == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
