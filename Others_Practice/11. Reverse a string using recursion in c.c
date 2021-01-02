#include<stdio.h>

void Reverse(char *p);

int main()
{
    char str[100];
    printf("Enter A String : ");
    gets(str);
    printf("\n\nReverse String Is :");
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
