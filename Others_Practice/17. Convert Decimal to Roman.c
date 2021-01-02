#include<stdio.h>

int roman(int m,int n);

int main()
{
    int N;
    printf("Enter A Decimal Number : ");
    scanf("%d", &N);

    if(N <= 0)
        printf("Invalid .\n");
    else
    {
        printf("\n\nDecimal %d Equals to Roman : ",N);
        while(N > 0)
        {
            if(N >= 1000)
                N = roman(N,1000);
            else if(N >= 500)
                N = roman(N,500);
            else if(N >= 100)
                N = roman(N,100);
            else if(N >= 50)
                N = roman(N,50);
            else if(N >= 10)
                N = roman(N,10);
            else if(N >= 5)
                N = roman(N,5);
            else if(N >= 1)
                N = roman(N,1);
        }
    }
    printf("\n\n");
    return 0;
}
int roman(int m,int n)
{
    int p,i,s;
    char ch;
    if(n==1000)
        ch = 'M';
    else if(n==500)
        ch = 'D';
    else if(n==100)
        ch = 'C';
    else if(n==50)
        ch = 'L';
    else if(n==10)
        ch = 'X';
    else if(n==5)
        ch = 'V';
    else if(n==1)
        ch = 'I';
    p = m / n;
    for(i=0; i<p; i++)
        printf("%c",ch);
    s = m - (n*p);
    return s;
}
