#include<stdio.h>

int main()
{
    int t[10];
    scanf("%d%d%d%d%d%d%d%d%d%d", &t[0],&t[1],&t[2],&t[3],&t[4],&t[5],&t[6],&t[7],&t[8],&t[9]);
    int i,j,count;
    for(i=0; i<101; i++)
    {
        count = 0;
        for(j=0; j<10; j++)
        {
           if(i == t[j])
           {
               count++;
           }
        }
        printf("Marks %d = Count %d\n",i,t[j]);
    }

    return 0;

}
