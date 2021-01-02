#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,s1,s2,s3,s4;

    while(scanf("%d", &n) != EOF)
    {
        s1=0;
        s2=0;
        s3=0;
        s4=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &s);

            if(s == 1) s1++;
            else if(s==2) s2++;
            else if(s==3) s3++;
            else s4++;
        }

        int ans = 0;

        ans += s4;

        ans = ans + (s2/2);

        if(s1 <= s3)
        {
            ans += s1;
            s3 -= s1;
            ans += s3;

            if(s2 % 2 != 0)
                ans++;
        }
        else
        {
            ans += s3;
            s1 -= s3;

            ans = ans + (s1/4);

            int extra = 0;
            extra = s1 % 4;

            if(s2 % 2 != 0)
                extra += 2;

            if(extra <= 4 && extra > 0)
                ans++;
            else if(extra > 0)
                ans += 2;
        }
        printf("%d\n",ans);
    }

    return 0;
}
