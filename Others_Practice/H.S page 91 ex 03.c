#include<stdio.h>

int main()
{
    char ch;

    do
    {
        printf("Load, Save, Edit, Quit ?\n");
        do
        {
            printf("Enter Your selection : ");
            ch = getchar();
        }
        while(ch != 'L' && ch != 'S' && ch != 'E' && ch != 'Q');

        if(ch != 'Q')
        {
            printf("f\n");
            break;
        }
        if(ch != 'Q')
        {
            printf("g\n");
        }
    }
    while (ch != 'Q');
}


