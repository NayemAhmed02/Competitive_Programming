#include<stdio.h>
#include<string.h>

int main()
{
    int T,I;
    char str[30];

    scanf("%d", &T);

    for(I=0; I<T; I++)
    {
        scanf("%s", &str);

        if(strcmp(str,"ac") == 0)
            printf("Accepted\n");
        else if(strcmp(str,"wa") == 0)
            printf("Wrong Answer\n");
        else if(strcmp(str,"rte") == 0)
            printf("Run Time Error\n");
         else if(strcmp(str,"tle") == 0)
            printf("Time Limit Exceeded\n");
    }
    return 0;
}
