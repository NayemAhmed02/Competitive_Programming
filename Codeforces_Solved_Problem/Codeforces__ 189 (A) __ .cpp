#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,a[3];

    while(scanf("%d %d %d %d", &num, &a[0], &a[1], &a[2]) != EOF)
    {
        sort(a, a+3);

        int dia = num / a[0];
        int dib = num / a[1];
        int dic = num / a[2];

        int sum = 0;
        int MAX = INT_MIN;

        if(a[0]==1 || a[1]==1 || a[2]==1)
            printf("%d\n",num);
        else
        {

            for(int i=0; i<=dic; i++)
            {
                for(int j=0; j<=dib; j++)
                {
                    for(int k=0; k<=dia; k--)
                    {
                        int difin = (i*a[2]) + (j*a[1]) + (k*a[0]);
                        //if(i==110 && k==1) printf("i=%d\nj=%d\nk=%d\nde=%d\n",i,j,k,difin);
                        if(difin == num)
                        {
                            sum = i+j+k;
                            if(sum > MAX) MAX = sum;
                        }
                    }
                }
            }
            printf("%d\n",MAX);
        }
    }
    return 0;
}
