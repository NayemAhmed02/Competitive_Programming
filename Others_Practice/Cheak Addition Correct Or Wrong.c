#include<stdio.h>

int main()
{
    int ans,count;

    for(count=1; count<11; count++)
    {
        printf("what is %d + %d ?\n",count,count);
        scanf("%d", &ans);

        if(ans==count+count)
        {
            printf("Right\n");
        }
        else
        {
            printf("Sorry, you are wrong\n.");
            printf("The answer is %d\n.",count+count);
        }
    }

    return 0;
}
