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

        for(int i=dic; i>=0; i--)
        {
            for(int j=dib; j>=0; j--)
            {
                for(int k=dia; k>=0; k--)
                {
                    int difin = (i*a[2]) + (j*a[1]) + (k*a[0]);
                    printf("%d %d %d\n",i,j,k);
                    printf("difin=%d\n",difin);
                    if(difin == num)
                    {
                        sum = i+j+k;
                        break;
                    }
                }
                if(sum > 0) break;
            }
            if(sum > 0) break;
        }
        printf("%d\n",sum);
    }
    return 0;
}
