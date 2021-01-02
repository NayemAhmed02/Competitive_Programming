#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter the value of num1:");
    scanf("%d", &num1);
    printf("enter the value of num2:");
    scanf("%d", &num2);

    char s='+',b='-',m='*',d='/';

    printf("%d s %d=%d\n",num1,num2,num1+num2);
    printf("%d b %d=%d\n",num1,num2,num1-num2);
    printf("%d m %d=%d\n",num1,num2,num1*num2);
    printf("%d d %d=%d\n",num1,num2,num1/num2);
    return 0;
}
