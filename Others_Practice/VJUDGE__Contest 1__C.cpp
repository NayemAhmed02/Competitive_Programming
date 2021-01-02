#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int num,ele[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &ele[i]);

        sort(ele, ele+num, greater<int>());
        int maxi;

        for(int j=0; j<num; j++)
        {
            if(ele[j] >= 0)
            {
                int s = sqrt(ele[j]);
                if((s*s) != ele[j])
                {
                    maxi = ele[j];
                    break;
                }
            }
            else
            {
                maxi = ele[j];
                break;
            }
        }
        printf("%d\n",maxi);
    }
    return 0;
}
