#include<stdio.h>

int main()
{
    int t,r,c,result,i;

    while(scanf("%d", &t) != EOF)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d %d", &r, &c);
            result = 0;

            if((r+1)<=8 && (r+1)>=1)
            {
                if((c+2)<=8 && (c+2)>=1)
                    result++;
            }
            if((r+2)<=8 && (r+2)>=1)
            {
                if((c+1)<=8 && (c+1)>=1)
                    result++;
            }
            if((r+2)<=8 && (r+2)>=1)
            {
                if((c-1)<=8 && (c-1)>=1)
                    result++;
            }
            if((r-1)<=8 && (r-1)>=1)
            {
                if((c+2)<=8 && (c+2)>=1)
                    result++;
            }
            if((r+1)<=8 && (r+1)>=1)
            {
                if((c-2)<=8 && (c-2)>=1)
                    result++;
            }
            if((r-2)<=8 && (r-2)>=1)
            {
                if((c+1)<=8 && (c+1)>=1)
                    result++;
            }
            if((r-1)<=8 && (r-1)>=1)
            {
                if((c-2)<=8 && (c-2)>=1)
                    result++;
            }
            if((r-2)<=8 && (r-2)>=1)
            {
                if((c-1)<=8 && (c-1)>=1)
                    result++;
            }

            printf("Case %d: %d\n",i,result);
        }
    }
    return 0;
}
