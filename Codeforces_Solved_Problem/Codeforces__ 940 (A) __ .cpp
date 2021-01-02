#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    int num,dis,ele[SIZE];

    while(scanf("%d %d", &num, &dis) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &ele[i]);
        sort(ele, ele+num);
        int maxi = 0,total;
        for(int i=0; i<num; i++)
        {
            total = 0;
            for(int j=i; j<num; j++)
            {
                if((ele[j] - ele[i]) <= dis) total++;
            }
            if(total > maxi) maxi = total;
        }
        printf("%d\n",num-maxi);
    }
    return 0;
}
