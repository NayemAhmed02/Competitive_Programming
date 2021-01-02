#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[1010];

    while(scanf("%s %d", &str, &n) != EOF)
    {
        int mod = 0;
        int i;

        for(i=0; str[i]; i++)
        {
            if(i==0 && str[i] == '?')
            {
                mod = 1 % n;
                str[i] = '1';
            }
            else if(str[i] == '?')
            {
                mod = (mod*10) % n;
            }
            else
                mod = ((mod*10) + (str[i]-48)) % n;
        }
        //printf("%d\n",mod);
        if(mod == 0)
        {
            for(int k=0; k<i; k++)
            {
                if(str[k] == '?')
                    printf("0");
                else
                    printf("%c",str[k]);
            }
            printf("\n");
        }
        else
        {
            int dif = n - mod;
            int define = 1;
            // printf("dif = %d\n",dif);
            int p = 0;
            while(dif > 0)
            {
                dif /= 10;
                p++;
            }
            int q = i;
            i = i-p;
            //printf("i=%d\nq=%d\n",i,q);
            for(int k=i; k<q; k++)
            {
                if(str[k] != '?')
                    define = 0;
            }
            if(define == 1)
            {
                //printf("i=%d\np=%d\n",i,p);
                for(int j=0; j<i; j++)
                {
                    if(str[j] == '?')
                        printf("0");
                    else
                        printf("%c",str[j]);
                }
                printf("%d\n",n-mod);
            }
            else
                printf("*\n");
        }
    }
    return 0;


}
