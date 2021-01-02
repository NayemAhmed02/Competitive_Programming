#include<stdio.h>

int main()
{
    char str[100];
    int i,j,k=0,l=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; i<100; i++)
    {
        if(str[i]=='\0')
            break;
    }
    for(j=i-1; j>=0; j--)
    {
        if(str[k]==str[j])
            l++;
        k++;
    }
    if(l == i)
        printf("\nGiven String Is Palindrome.\n");
    else
        printf("\nGiven String Is Not Palindrome.\n");
    return 0;
}
