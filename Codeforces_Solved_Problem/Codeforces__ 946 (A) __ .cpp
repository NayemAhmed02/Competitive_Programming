#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    int num,ans,ele[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &ele[i]);
        ans = 0;
        for(int i=0; i<num; i++)
        {
            if(ele[i] < 0) ans = ans - ele[i];
            else ans = ans + ele[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
