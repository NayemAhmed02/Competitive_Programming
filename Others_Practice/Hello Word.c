#include<stdio.h>

int main()
{
    int i,j,k,n=0;

    for(n=1; n<11; n++)
    {
        if(n == 1)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(i == 4) printf("c");
                    else
                    {
                        if(j == 1 || j == 5) printf("c");
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }
        else if(n == 2)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(i == 1 || i == 7) printf("c");
                    else if(i == 4)
                    {
                        if(j < 4) printf("c");
                        else printf(" ");
                    }
                    else
                    {
                        if(j == 1) printf("c");
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }
        else if(n == 3 || n == 4 || n == 9)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(i == 7) printf("c");
                    else
                    {
                        if(j == 1) printf("c");
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }
        else if(n == 5 || n == 7)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(i == 1 || i == 7) printf("c");
                    else
                    {
                        if(j == 1 || j == 5) printf("c");
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }
        if(n == 6)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(i == 3 && j == 3) printf("c");
                    else if(i == 4)
                    {
                        if(j == 3) printf(" ");
                        else printf("c");
                    }
                    else
                    {
                        if(j == 1 || j == 5) printf("c");
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }
        if(n == 8)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                   if(i == 1 || i == 3) printf("c");
                   else if(i == 2)
                   {
                       if(j == 1 || j == 5) printf("c");
                       else printf(" ");
                   }
                   else if(i == 4 && j == 2) printf("c");
                   else if(i == 5 && j == 3) printf("c");
                   else if(i == 6 && j == 4) printf("c");
                   else if(i == 7 && j == 5) printf("c");
                   else if(i == 4 && j == 1) printf("c");
                   else if(i == 5 && j == 1) printf("c");
                   else if(i == 6 && j == 1) printf("c");
                   else if(i == 7 && j == 1) printf("c");
                   else printf(" ");
                }
                printf("\n");
            }
            printf("\n\n");
        }
        if(n == 10)
        {
            for(i=1; i<=7; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(i == 1 || i == 7)
                    {
                        if(j == 5) printf(" ");
                        else printf("c");
                    }
                    else
                    {
                        if(j == 1 || j == 5) printf("c");
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }
    }
    return 0;
}
