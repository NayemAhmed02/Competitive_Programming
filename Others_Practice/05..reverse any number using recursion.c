#include<stdio.h>

void Reverse(char *p);

int main()
{
    char str[100];
    printf("Enter A Number : ");
    gets(str);
    printf("\n\nReverse Number Is :");
    Reverse(str);
    printf("\n\n");
    return 0;
}
void Reverse(char *p)
{
    char ch;
    ch = *p;
    if(*p)
    {
        *p++;
        Reverse(p);
    }
    printf("%c",ch);
}

