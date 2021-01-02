#include<stdio.h>

int main()
{
    char str1[50],str2[50],str3[110],*p1,*p2;
    int I=0;

    printf("Enter First String : ");
    gets(str1);
    printf("Enter Second String : ");
    gets(str2);

    p1 = str1;
    p2 = str2;

    while(*p1)
        str3[I++] = *p1++;
    while(*p2)
        str3[I++] = *p2++;

    str3[I] = '\0';
    printf("\n\nAfter First And Second String Concatenation : %s\n\n",str3);

    return 0;
}
