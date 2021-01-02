#include<stdio.h>

int main()
{
    int i,j,k,n,m,t;
    char n1[10],n2[10],r[10];

    printf("Enter The Number Of Test Case : ");
    scanf("%d", &t);
    printf("\n\n");
    getchar();

    for(i=0; i<t; i++)
    {
        gets(n1);
        gets(n2);
        n = 0;
        for(j=0; n1[j]!='\0'; j++)
        {
            for(k=0; n2[k]!='\0'; k++)
            {
                if(n1[j] == n2[k])
                {
                    r[n] = n1[j];
                    n++;
                    break;
                }
            }
        }
        printf("The Repeated Number Between Given Numbers are : ");
        if(n == 0) printf("None.\n");
        else{
        for(j=0; j<10; j++)
        {
            for(m=0; m<n; m++)
            {
                if(r[m] == j+48)
                {
                    printf("%d   ",j);
                    break;
                }
            }
        }
        }
        printf("\n\n");
    }
    return 0;
}
