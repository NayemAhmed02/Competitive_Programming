#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,num;

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d", &num);
            int sample = 1;
            int i = 1;
            while(sample < num)
            {
                sample = sample + i;
                i++;
            }
            if(sample == num) printf("1 ");
            else printf("0 ");
        }
    }
}
