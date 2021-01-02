#include<stdio.h>

int main()
{
    int N,I,J=0;
    printf("Enter A Number : ");
    scanf("%d",&N);

    if(N == 1)printf("\nGiven Number Is A Unit Number.\n");
    else if(N == 0)printf("\nGiven Number Is Zero.\n");
    else if(N < 0)printf("\nInvalid.\nIts A Negative Number.\n");
    else
    {

    for(I=2; I<N; I++)
    {
        if(N % I == 0)
        {
            J++;
            if(J == 1)
            {
                printf("\nGiven Number Is Not A Perfect Number\n");
                break;
            }
        }
    }
    if(J == 0)
    {
        printf("\nGiven Number Is A Perfect Number\n");
    }
    }
    return 0;
}
