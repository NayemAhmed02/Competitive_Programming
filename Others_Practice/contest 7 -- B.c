#include<stdio.h>
#include<string.h>

int main()
{
    char str[60];
    int R,i;

    while(scanf("%s", &str) != EOF)
    {
        i = 0;
        R = 0;
        while(str[i])
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
                R++;
            else if(str[i]=='1' || str[i]=='3' || str[i]=='5' || str[i]=='7' || str[i]=='9')
                R++;
            i++;
        }
        printf("%d\n",R);
    }
    return 0;
}
