#include<stdio.h>

int main()
{
    int Answer,Count,Again;

    for(Count=1; Count<11; Count++)
    {
        printf("What Is %d + %d ?",Count,Count);
        scanf("%d", &Answer);
        if(Answer == Count + Count)
        {
            printf("RIGHT.\n");
        }
        else
        {
            printf("SORRY,You Are Wrong.\n");
            printf("Try Again.\n");

            printf("\nWhat Is %d + %d ?",Count,Count);
            scanf("%d", &Answer);

            if(Answer == Count + Count)
            {
                printf("RIGHT.\n");
            }
            else
            {
                printf("Wrong\nThe Answer Is : %d\n",Count + Count);
            }
        }
    }
    return 0;
}
