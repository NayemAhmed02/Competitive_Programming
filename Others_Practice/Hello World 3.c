#include<stdio.h>

int main()
{
    int i,j;

    for(i=0; i<7; i++)
    {
        for(j=0; j<37; j++)
        {
            if(i==1 || i==2 || i==4 || i==5)
            {
                if(j==12 || j==20 || j==28) printf(" ");
                else if(j % 4 == 0) printf("c");
                else printf(" ");
            }
            else if(i==0)
            {
                if(j==0 || j==4) printf("c");
                else if(j==16 || j==24) printf("c");
                else if(j>=8 && j<=12) printf("c");
                else if(j>=32 && j<=36) printf("c");
                else printf(" ");
            }
            else if(i==3)
            {
                if(j==12 || j==20 || j==28) printf(" ");
                else if(j % 4 == 0) printf("c");
                else if(j>=1 && j<=3) printf("c");
                else if(j==9 || j==10) printf("c");
                else printf(" ");
            }
            else
            {
                if(j==0 || j==4) printf("c");
                else if(j>=8 && j<=12) printf("c");
                else if(j>=16 && j<=20) printf("c");
                else if(j>=24 && j<=28) printf("c");
                else if(j>=32 && j<=36) printf("c");
                else printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");

    for(i=0; i<7; i++)
    {
        for(j=0; j<37; j++)
        {
            if(i==0)
            {
                if(j==0 || j==4 || j==24) printf("c");
                else if(j>=8 && j<=12) printf("c");
                else if(j>=16 && j<=20) printf("c");
                else if(j>=32 && j<=35) printf("c");
                else printf(" ");
            }
            else if(i==1)
            {
                if(j==28) printf(" ");
                else if(j % 4 == 0) printf("c");
                else printf(" ");
            }
            else if(i==2)
            {
               if(j==28) printf(" ");
               else if(j % 4 == 0) printf("c");
               else if(j==2 || j==17 || j==18 || j==19) printf("c");
               else printf(" ");
            }
            else if(i==3)
            {
               if(j==20 || j==28) printf(" ");
               else if(j % 4 == 0) printf("c");
               else if(j==1 || j==3 || j==17) printf("c");
               else printf(" ");
            }
            else if(i==4)
            {
               if(j==20 || j==28) printf(" ");
               else if(j % 4 == 0) printf("c");
               else if(j==18) printf("c");
               else printf(" ");
            }
            else if(i==5)
            {
               if(j==20 || j==28) printf(" ");
               else if(j % 4 == 0) printf("c");
               else if(j==19) printf("c");
               else printf(" ");
            }
            else if(i==6)
            {
                if(j==0 || j==4 || j==16 || j==20) printf("c");
                else if(j>=8 && j<=12) printf("c");
                else if(j>=24 && j<=28) printf("c");
                else if(j>=32 && j<=35) printf("c");
                else printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
