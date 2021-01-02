#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[2010],ch;
    int t,i,j,k,l,m,R,p,q;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s", &str);
        l = strlen(str);

        for(j=0; j<l; j++)
        {
            for(k=j+1; k<l; k++)
            {
                if(str[j] > str[k])
                {
                    ch = str[j];
                    str[j] = str[k];
                    str[k] = ch;
                }
            }
        }
        q = 0;
        printf("Case %d: ",i);
        for(j=0; str[j]; j=k)
        {
            R = 0;
            for(k=j; str[k]; k++)
            {
                if(str[j] != str[k]) break;
                else R++;
            }
            p = 0;
            for(m=2; m<=(sqrt(R)); m++)
            {
                if(R % m == 0)
                {
                    p = 1;
                    break;
                }
            }
            if(R == 1) p = 1;
            if(p == 0)
                {
                    printf("%c",str[j]);
                    q++;
                }
        }
        if(q == 0) printf("empty");
        printf("\n");
    }
    return 0;
}
