#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,num;

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d", &num);

            int define = 0;

            int divi_3 = num / 3;
            int divi_7 = num / 7;

            for(int i=0; i<=divi_3; i++)
            {
                for(int j=0; j<=divi_7; j++)
                {
                    int sum = (j*7) + (i*3);
                    if(sum == num)
                    {
                        define = 1;
                        break;
                    }
                }
            }
            if(define == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
