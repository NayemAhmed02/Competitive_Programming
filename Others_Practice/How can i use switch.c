#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a Letter Between These(L,S,E,D,Q)\n");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'L':
        printf("load\n");
        break;
    case 'S':
        printf("save\n");
        break;
    case 'E':
        printf("enter\n");
        break;
    case 'D':
        printf("display\n");
        break;
    case 'Q':
        printf("quit\n");
        break;
    }
    return 0;
}
