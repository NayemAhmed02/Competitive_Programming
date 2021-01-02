#include<stdio.h>

int main()
{
    int i,j,flag,test;
    char str[110];

    while(scanf("%s", &str) != EOF)
    {
        test = 0;
        for(i=0; str[i]; i++)
        {
            flag = 0;
            for(j=i; str[j]; j++)
            {
                if(str[i] == str[j])
                    flag++;
            }
            if(flag == 1)
                test++;
        }
        if(test % 2 == 0)
            printf("CHAT WITH HER!\n");
        else
            printf("IGNORE HIM!\n");
    }
    return 0;
}
