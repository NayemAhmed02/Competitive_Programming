#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    char str[110];

    while(scanf("%d", &num) != EOF)
    {
        scanf("%s", &str);

        int total = 0;

        for(int i=0; i<num; i++)
            total += str[i] - 48;

        int sum = 0,condition,total1;

        for(int i=0; i<num; i++)
        {
            sum += str[i] - 48;
            condition = 0;
            total1 = sum;

            for(int j=i+1; j<num; )
            {
                int sum1 = 0;
                while(sum1 <= sum && j < num)
                {
                    sum1 += str[j] - 48;
                    j++;
                    if(sum1 == sum)
                        break;

                }
                if(sum1 == sum)
                {
                    total1 += sum1;
                    condition++;
                }

            }
            if(total1 == total && condition > 0)
                break;
        }
        if(total1 == total && condition > 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
