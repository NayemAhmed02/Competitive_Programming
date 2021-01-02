#include<stdio.h>

int main()
{
    char ch;

    do
    {
        printf("Enter A Letter : ");
        ch = getche();
        printf(" \n");
    }
    while(ch != 'q');
    {
        printf(" \nFind The q .\n");
    }
    return 0;
}
