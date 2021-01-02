#include<stdio.h>
#include<string.h>

int main()
{
    int Q;
    char str1[30],str2[30];
    scanf("%d", &Q);
    while(Q--)
    {
        scanf("%s %s", &str1, &str2);

        if(strcmp(str1,"Dhaka") == 0)
        {
            if(strcmp(str2,"Dhaka") == 0)
                printf("0\n");
            else if(strcmp(str2,"Chittagong") == 0)
                printf("200\n");
            else if(strcmp(str2,"Rajshahi") == 0)
                printf("300\n");
            else if(strcmp(str2,"Kathmandu") == 0)
                printf("3200\n");
            else if(strcmp(str2,"Butwal") == 0)
                printf("8200\n");
        }
        else if(strcmp(str1,"Chittagong") == 0)
        {
            if(strcmp(str2,"Dhaka") == 0)
                printf("200\n");
            else if(strcmp(str2,"Chittagong") == 0)
                printf("0\n");
            else if(strcmp(str2,"Rajshahi") == 0)
                printf("500\n");
            else if(strcmp(str2,"Kathmandu") == 0)
                printf("3000\n");
            else if(strcmp(str2,"Butwal") == 0)
                printf("8000\n");
        }
        else if(strcmp(str1,"Rajshahi") == 0)
        {
            if(strcmp(str2,"Dhaka") == 0)
                printf("300\n");
            else if(strcmp(str2,"Chittagong") == 0)
                printf("500\n");
            else if(strcmp(str2,"Rajshahi") == 0)
                printf("0\n");
            else if(strcmp(str2,"Kathmandu") == 0)
                printf("3500\n");
            else if(strcmp(str2,"Butwal") == 0)
                printf("8500\n");
        }
        else if(strcmp(str1,"Kathmandu") == 0)
        {
            if(strcmp(str2,"Dhaka") == 0)
                printf("3200\n");
            else if(strcmp(str2,"Chittagong") == 0)
                printf("3000\n");
            else if(strcmp(str2," Rajshahi") == 0)
                printf("3500\n");
            else if(strcmp(str2,"Kathmandu") == 0)
                printf("0\n");
            else if(strcmp(str2,"Butwal") == 0)
                printf("11000\n");
        }
        else if(strcmp(str1,"Butwal") == 0)
        {
            if(strcmp(str2,"Dhaka") == 0)
                printf("8200\n");
            else if(strcmp(str2,"Chittagong") == 0)
                printf("8000\n");
            else if(strcmp(str2," Rajshahi") == 0)
                printf("8500\n");
            else if(strcmp(str2,"Kathmandu") == 0)
                printf("11000\n");
            else if(strcmp(str2,"Butwal") == 0)
                printf("0\n");
        }
    }
    return 0;
}
