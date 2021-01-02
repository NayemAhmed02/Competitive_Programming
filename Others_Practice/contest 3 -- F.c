#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[110];
    int I;
    while(scanf("%s", &str) != EOF)
    {
        I = 0;
        while(str[I])
        {
            if(str[I]!='A' && str[I]!='a' && str[I]!='E' &&
               str[I]!='e' && str[I]!='O' && str[I]!='o' &&
               str[I]!='I' && str[I]!='i' && str[I]!='U' &&
               str[I]!='u' && str[I]!='Y' && str[I]!='y')
            {
                printf(".%c",tolower(str[I]));
            }
            I++;
        }
        printf("\n");
    }
    return 0;
}
