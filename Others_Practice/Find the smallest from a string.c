#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],sm;
    int i,l;
    printf("Enter A String : ");
    gets(str);
    l = strlen(str);
    for(i=0; i<l-1; i++)
    {
        if(str[i] <= str[i+1])
        {
            sm = str[i];
            str[i+1] = sm;
        }
        else sm = str[i+1];
    }
    printf("\n\nThe Smallest Character of the string is : %c\n",sm);

    return 0;
}
