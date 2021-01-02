#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int num,marks[SIZE][4];

    while(scanf("%d", &num) != EOF)
    {
        int sum[SIZE];
        for(int i=0; i<num; i++)
        {
            sum[i] = 0;
            for(int j=0; j<4; j++)
            {
                scanf("%d", &marks[i][j]);
                sum[i] += marks[i][j];
            }
        }
        int smith = sum[0];
        int result;

        sort(sum, sum+num, greater<int>());

        for(int i=0; i<num; i++)
        {
            if(smith == sum[i])
            {
                result = i+1;
                break;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
