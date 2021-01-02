#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    int num,coin[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &coin[i]);

        sort(coin, coin+num);

        int maxi = 0;

        for(int i=0; i<num; )
        {
            int j = i,sample = 0;
            while((coin[j] == coin[i]) && i<num)
            {
                i++;
                sample++;
            }
            if(sample > maxi) maxi = sample;
        }

        printf("%d\n",maxi);
    }
    return 0;
}

