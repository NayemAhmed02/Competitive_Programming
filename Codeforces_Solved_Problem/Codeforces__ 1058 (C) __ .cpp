#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    char str[110];

    while(scanf("%d", &num) != EOF)
    {
        scanf("%s", &str);
        int sum=0,define,k;
        for(int i=0; i<num-1; i++)
        {
            sum += str[i] - 48;
            printf("s = %d\n",sum);
            define = 1;
            int de = 0;
            for(k=i+1; k<num; )
            {
                int sum1 = 0;
                while(sum1 <= sum && k < num)
                {
                    sum1 += str[k] - 48;
                    k++;
                    if(sum1 == sum)
                    {
                        de++;
                        break;
                    }
                }
                printf("%d\n",sum1);
                if(sum1 != sum && sum1 > 0 && de > 0)
                {
                    define = 0;
                    break;
                }
            }
            if(k == num && define == 1) break;
        }
        if(define == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
