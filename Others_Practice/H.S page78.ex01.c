#include<stdio.h>

int main()
{
    char ch;
    printf("The Letter Is : ");
    scanf("%c", &ch);

    int Y;

    if(ch == 'S'
       )
    {
        printf("Enter A Number : ");
        scanf("%d", &Y);
        if(Y)
        {
            printf("Its Square Is : %d",Y*Y);
        }
    }
    else
    {
        printf("Make Next Selection.");
    }
    return 0;
}
