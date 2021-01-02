#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[110];
    int i,j,k,l,leng;
    while(scanf("%s", &str) != EOF)
    {
        leng = strlen(str);
        i = 0;
        l = 0;
        k = 0;
        while(str[i])
        {
            if(str[i] >= 'A' && str[i] <= 'Z') l++;
            i++;
        }
        if(str[0] >= 'a' && str[0] <= 'z')
        {
            for(j=1; j<leng; j++)
               {
                   if(str[j] >= 'A' && str[j] <= 'Z') k++;
                   else break;
               }
        }
        if(l == leng)
        {
            for(j=0; j<leng; j++)
                printf("%c", tolower(str[j]));
            printf("\n");
        }
        else if((k+1) == leng)
        {
            printf("%c",toupper(str[0]));
            for(j=1; j<leng; j++)
                printf("%c",tolower(str[j]));
            printf("\n");
        }
        else printf("%s\n",str);
    }
    return 0;
}
