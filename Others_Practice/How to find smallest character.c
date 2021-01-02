#include<stdio.h>

int main()
{
    char ch,sm='z';
    int i,j;
    printf("Enter the number of total character : ");
    scanf("%d", &j);
    for(i=0; i<j; i++)
    {
        ch = getche();
        if(ch < sm) sm = ch;
    }
    printf("\n\nThe smallest character is : %c\n",sm);
    return 0;
}
