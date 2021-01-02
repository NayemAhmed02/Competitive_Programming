#include<stdio.h>

int main()
{
    int i,n;

    for(n=1; n<11; n++)
    {
        if(n == 1)
        {
            for(i=1; i<=7; i++)
            {
                if(i == 4) printf("ccccc\n");
                else printf("c   c\n");
            }
            printf("\n\n");
        }
        else if(n == 2)
        {
            for(i=1; i<=7; i++)
            {
                if(i == 1 || i == 7) printf("ccccc\n");
                else if(i == 4) printf("ccc  \n");
                else printf("c    \n");
            }
            printf("\n\n");
        }
        else if(n == 3 || n == 4 || n == 9)
        {
            for(i=1; i<=7; i++)
            {
                if(i == 7) printf("ccccc\n");
                else printf("c    \n");
            }
            printf("\n\n");
        }
        else if(n == 5 || n == 7)
        {
            for(i=1; i<=7; i++)
            {
                if(i == 1 || i == 7) printf("ccccc\n");
                else printf("c   c\n");
            }
            printf("\n\n");
        }
        else if(n == 6)
        {
            for(i=1; i<=7; i++)
            {
                if(i == 3) printf("c c c\n");
                else if(i == 4) printf("cc cc\n");
                else printf("c   c\n");
            }
            printf("\n\n");
        }
        else if(n == 8)
        {
            for(i=1; i<=7; i++)
            {
               if(i == 1 || i == 3) printf("ccccc\n");
               else if(i == 2) printf("c   c\n");
               else if(i == 4) printf("cc   \n");
               else if(i == 5) printf("c c  \n");
               else if(i == 6) printf("c  c \n");
               else printf("c   c\n");
            }
            printf("\n\n");
        }
        if(n == 10)
        {
            for(i=1; i<=7; i++)
            {
                if(i == 1 || i == 7) printf("cccc \n");
                else printf("c   c\n");
            }
            printf("\n\n");
        }
    }
    return 0;
}
