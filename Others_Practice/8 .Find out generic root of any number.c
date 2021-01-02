#include<stdio.h>

int main()
{
    int N,SUM,R;
    printf("Enter A Number : ");
    scanf("%d", &N);

    while(N > 0)
    {
        SUM = 0;
        while(N > 0)
        {
          R = N % 10;
          SUM = SUM+R;
          N = N/10;
        }
        if(SUM > 9)N = SUM;
        else
            break;
    }
    printf("\n\nGiven Number Generic Root Is : %d\n",SUM);

    return 0;
}
