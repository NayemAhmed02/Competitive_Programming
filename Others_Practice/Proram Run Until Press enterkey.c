#include<stdio.h>

int main()
{
    int ch;
    printf("Enter a Character: ");

    while(ch != '\r')
    {
         ch = getche();
        printf("\nEnter a Character: ");
    }
    return 0;
}
