#include<stdio.h>

void Reverse(int N);

int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    printf("\n\nReverse Number Is :");
    Reverse(n);
    printf("\n\n");
    return 0;
}
void Reverse(int N)
{
    int I;
    if(N > 0)
    {
        I = N % 10;
        printf("%d",I);
        N = N / 10;
        Reverse(N);
    }
}

