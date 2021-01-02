#include<bits/stdc++.h>
using namespace std;

#define SIZE 100010
#define SIZ 2

int main()
{
    int num,rectangle[SIZE][SIZ];

    while(scanf("%d", &num) != EOF)
    {
        int big,small,test,temp=0;
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<2; j++)
                scanf("%d", &rectangle[i][j]);
        }
        if(rectangle[0][0] >= rectangle[0][1]) test = rectangle[0][0];
        else test = rectangle[0][1];
        for(int i=1; i<num; i++)
        {
            if(rectangle[i][0] >= rectangle[i][1])
            {
                big = rectangle[i][0];
                small = rectangle[i][1];
            }
            else
            {
                big = rectangle[i][1];
                small = rectangle[i][0];
            }
            if(test >= big)
                test = big;
            else if(test >= small)
                test = small;
            else
            {
                temp = 1;
                break;
            }
        }
        if(temp == 1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
