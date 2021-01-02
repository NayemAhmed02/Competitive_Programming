#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch[1010],ch1[1010];

    while(scanf("%d", &n) != EOF)
    {
        scanf("%s %s", &ch, &ch1);

        int total = 0;

        for(int i=0; i<n; i++)
        {
            int a = ch[i]-48;
            int b = ch1[i]-48;

            int dif1 = abs(a-b);

            if(a < b)
                a += 10;
            else
                b += 10;

            int dif2 = abs(a-b);


            total = total + (min(dif1, dif2));

         }
         printf("%d\n",total);
    }
    return 0;
}
