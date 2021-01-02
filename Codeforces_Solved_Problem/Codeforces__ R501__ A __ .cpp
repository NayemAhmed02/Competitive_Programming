#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    int num,upb;

    while(scanf("%d %d", &num, &upb) != EOF)
    {
        int arr[SIZE][2];
        for(int i=0; i<num; i++)
            for(int j=0; j<2; j++)
                scanf("%d",&arr[i][j]);

        int result[SIZE],sum = 0;
        //int mini = arr[0][0],maxi = arr[0][0];

        /*for(int i=0; i<num; i++)
        {
            for(int j=0; j<2; j++)
            {
                if(arr[i][j] > maxi) maxi = arr[i][j];
                if(arr[i][j] < mini) mini = arr[i][j];
            }
        }*/

        for(int i=1; i<=upb; i++)
        {
            int test = 0;
            for(int j=0; j<num; j++)
            {
                if((i >= arr[j][0]) && (i <= arr[j][1]))
                {
                    test = 1;
                    break;
                }
            }
            if(test == 0)
            {
                result[sum] = i;
                sum++;
            }
        }
        printf("%d\n",sum);
        if(sum != 0)
        {

            for(int j=0; j<sum-1; j++)
                printf("%d ",result[j]);
            printf("%d\n",result[sum-1]);
        }
    }
    return 0;
}
