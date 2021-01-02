#include<stdio.h>
#include<conio.h>

int main()
{
    int i,m;

    for(i=1; m!=21; i++)
    {
        printf(" \nTry Number : %d\n",i);

        printf("What Is The Magic Number : ");
        scanf("%d", &m);

        if(m < 21)
        {
            printf("You Should Find In High\n");
        }
        else if(m > 21)
        {
            printf("You Should Find In Low\n");
        }
        else if(m == 21)
        {
            printf(" \n \nCONGRATULATION !!! \n \nYou Find The Magic Number. \n");
        }
    }
    return 0;

}
