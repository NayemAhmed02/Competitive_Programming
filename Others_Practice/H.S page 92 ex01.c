#include<stdio.h>

int main()
{
    int i;
    i=1;
    while(i<1000)
    {
        printf("%d\n",i);
        i++;

        if(i == 15)
            break;
    }
    return 0;
}

