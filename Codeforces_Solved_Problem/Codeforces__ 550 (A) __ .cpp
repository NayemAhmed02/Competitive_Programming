#include<stdio.h>
#include<string.h>

int main()
{
    char str[10010];

    scanf("%s", &str);
    int ab = 0,ba = 0,i = 0;

    for(i=0; str[i]; i++)
    {
        if(str[i] == 'A')
        {
            if(str[i+1] == 'B' && ab==0)
            {
                ab = 1;
                if(ba == 1) break;
                i++;
            }
        }
        else if(str[i] == 'B')
        {
            if(str[i+1] == 'A' && ba==0)
            {
                ba = 1;
                if(ab == 1) break;
                i++;
            }
        }
    }
    if(ab == 1 && ba == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
