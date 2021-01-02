#include<stdio.h>

int main()
{
    int Mat1[5][5],Mat2[5][5],Mul[5][5];
    int I,J,K,a,b,c,d,sum;
    printf("\nEnter the row and column of first matrix : ");
    scanf("%d %d", &a,&b);
    printf("\nEnter the row and column of second matrix : ");
    scanf("%d %d", &c,&d);
    if(b != c)
        printf("\nMatrix mutiplication is not possible.\nColumn of first matrix must be same as row of second matrix.\n\n");
    else
    {

    printf("\nEnter the First matrix : ");
    for(I=0; I<a; I++)
        for(J=0; J<b; J++)
            scanf("%d", &Mat1[I][J]);

    printf("\nEnter the Second matrix : ");
    for(I=0; I<c; I++)
        for(J=0; J<d; J++)
            scanf("%d", &Mat2[I][J]);

    printf("The First matrix Is :\n");
    for(I=0; I<a; I++)
    {
        printf("\n");
        for(J=0; J<b; J++)
            printf("%d\t",Mat1[I][J]);
    }

    printf("\n\nThe Second matrix Is :\n");
    for(I=0; I<c; I++)
    {
        printf("\n");
        for(J=0; J<d; J++)
            printf("%d\t",Mat2[I][J]);
    }
    for(I=0; I<a; I++)
        for(J=0; J<d; J++)
        Mul[I][J] = 0;
    for(I=0; I<a; I++)
    {
        for(J=0; J<d; J++)
        {
            sum = 0;
            for(K=0; K<b; K++)
                sum = sum + Mat1[I][K] * Mat2[K][J];
            Mul[I][J] = sum;
        }
    }
    printf("\n\nThe multiplication of two matrix is : \n\n");
    for(I=0; I<a; I++)
    {
        printf("\n");
        for(J=0; J<d; J++)
            printf("%d\t",Mul[I][J]);
    }
    }
    printf("\n\n");
    return 0;
}
