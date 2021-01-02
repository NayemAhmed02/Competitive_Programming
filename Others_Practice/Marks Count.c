#include<stdio.h>

int main()
{
    int t[10] = {50,55,60,65,70,75,60,50,90,90};
    int i, j, count;
    for(i=0; i<101; i++)
    {
        count = 0;
        for(j=0; j<10; j++)
        {
            if(t[j] == i)
            {
                count++;
            }
        }
        printf("Marks %d = count %d\n",i,count);
    }
    return 0;
}
