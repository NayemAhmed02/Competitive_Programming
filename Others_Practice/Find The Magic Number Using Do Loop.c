#include<stdio.h>

int main()
{
    int m;

    do
    {
        printf(" What Is The Magic Number : ");
        scanf("%d", &m);

        if(m < 21)
        {
            printf("You Should Find In High.\n \n");
        }
        else if(m >21)
        {
            printf("You Should Find In Low.\n \n");
        }
    }
    while(m != 21);
    {
        printf(" \n \nCONGRATULALION !!! \nYou Find The Magic Number: 21 \n");
    }
    return 0;
}

