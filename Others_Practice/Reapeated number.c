#include<stdio.h>

int main()
{
    int i,j,k,l,m,n,t,num1,num2;
    int r1[10],r2[10],r3[10];

    printf("Enter The Number Of Test Case : ");
    scanf("%d", &t);
    printf("\n\n");

    for(i=0; i<t; i++)
    {
        scanf("%d %d", &num1,&num2);
        j = 0;
        while(num1 > 0)
        {
           r1[j] = num1 % 10;
           num1 = num1 / 10;
           j++;
        }
        k = 0;
        while(num2 > 0)
        {
           r2[k] = num2 % 10;
           num2 = num2 / 10;
           k++;
        }
        n = 0;
        for(l=0; l<j; l++)
        {
            for(m=0; m<k; m++)
            {
                if(r1[l] == r2[m])
                {
                    r3[n] = r1[l];
                    n++;
                    break;
                }
            }
        }
        printf("The Repeated Number Between Given Numbers are : ");
        if(n == 0) printf("None.\n");
        else{
        for(l=0; l<10; l++)
        {
            for(m=0; m<n; m++)
            {
                if(l == r3[m])
                {
                    printf("%d   ",l);
                    break;
                }
            }
        }
        }
        printf("\n\n");
    }
    return 0;
}
