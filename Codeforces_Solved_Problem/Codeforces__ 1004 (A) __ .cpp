#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    int num,d,arr[SIZE];

    while(scanf("%d %d", &num, &d) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &arr[i]);

        num--;
        int dis,total = 0,nd = 2*d;

        for(int i=0; i<num; i++)
        {
            dis = arr[i+1] - arr[i];
            if(dis == nd) total++;
            else if(dis > nd) total += 2;
        }
        printf("%d\n",total+2);
    }
    return 0;
}
