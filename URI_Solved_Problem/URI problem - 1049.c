#include<stdio.h>

int main()
{
    char str1[15],str2[15],str3[15];
    gets(str1);
    gets(str2);
    gets(str3);
    if(str1[0] == 'v')
    {
        if(str2[0] == 'a')
        {
            if(str3[0] == 'c') printf("aguia\n");
            else if(str3[0] == 'o') printf("pomba\n");
        }
        else if(str2[0] == 'm')
        {
            if(str3[0] == 'o') printf("homem\n");
            else if(str3[0] == 'h') printf("vaca\n");
        }
    }
    else if(str1[0] == 'i')
    {
        if(str2[0] == 'i')
        {
            if(str3[2] == 'm' && str3[0] == 'h') printf("pulga\n");
            else if(str3[2] == 'r' && str3[0] == 'h') printf("lagarta\n");
        }
        else if(str2[0] == 'a')
        {
            if(str3[0] == 'h') printf("sanguessuga\n");
            else if(str3[0] == 'o') printf("minhoca\n");
        }
    }
    return 0;
}
