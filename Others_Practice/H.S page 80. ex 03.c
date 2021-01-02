#include<stdio.h>

int main()
{
    char ch;

    for(ch = getche(); ch != 'q'; ch = getche());
    {
        printf("Found The q .\n");
    }
    return 0;
}
