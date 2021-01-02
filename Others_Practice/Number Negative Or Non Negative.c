#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n<0) printf("Number is negative.");
    if(n>-1) printf("Number is non negative.");

    return 0;
}
