#include<stdio.h>

int main()
{

    int Ara[10],I,N,M,L,U,Mid,T=0;

    printf("Enter the size of an array: ");
    scanf("%d",&N);

    printf("Enter the elements in ascending order: ");
    for(I=0;I<N;I++){
         scanf("%d",&Ara[I]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&M);

    L=0;
    U=N-1;
    while(U >= L)
    {
         Mid=(L+U)/2;
         if(M==Ara[Mid]){
             T=1;
             break;
         }
         else if(M<Ara[Mid]){
             U=Mid-1;
         }
         else
             L=Mid+1;
    }
    if(T==0)
         printf("\nThe number is not found.\n");
    else
         printf("\nThe number is found.\n");

    return 0;
}
