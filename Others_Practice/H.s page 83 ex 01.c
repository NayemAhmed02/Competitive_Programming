#include<stdio.h>

int main()
{
    char ch;

    ch = getche();

    while(ch != 'q')
        ch = getche();
    {
        printf("Found The q.");
    }
    return 0;
}
