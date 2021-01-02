#include<bits/stdc++.h>
using namespace std;

#define SIZE 55

int main()
{
    int num,ele[SIZE],ans[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &ele[i]);
        int sample,k = 0;
        for(int i=0; i<num; i++)
        {
            sample = 1;
            for(int j=i+1; j<num; j++)
            {
                if(ele[i] == ele[j])
                {
                    sample = 0;
                    break;
                }
            }
            if(sample == 1) ans[k++] = ele[i];
        }
        printf("%d\n",k);
        for(int i=0; i<k-1; i++)
            printf("%d ",ans[i]);
        printf("%d\n",ans[k-1]);
    }
    return 0;
}
