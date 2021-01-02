#include<stdio.h>

int main()
{
    char i;

    printf("First Upper Case Letters : \n \n \n");

    for(i='A'; i<='Z'; i++)
    {
        printf("%c ASCII Code Is : %d\n",i,i);
    }

    printf(" \n \nNow Lower Case Letters : \n \n \n");

    for(i='a'; i<='z'; i++)
    {
        printf("%c ASCII Code Is : %d\n",i,i);
    }
    return 0;
}
