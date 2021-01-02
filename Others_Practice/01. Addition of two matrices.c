#include<stdio.h>

int main()
{
    int Mat1[3][3],Mat2[3][3];
    int I,J;

    printf("Enter the First matrix : ");
    for(I=0; I<3; I++)
        for(J=0; J<3; J++)
            scanf("%d", &Mat1[I][J]);

    printf("\nEnter the Second matrix : ");
    for(I=0; I<3; I++)
        for(J=0; J<3; J++)
            scanf("%d", &Mat2[I][J]);

    printf("The First matrix Is :\n");
    for(I=0; I<3; I++)
    {
        printf("\n");
        for(J=0; J<3; J++)
            printf("%d\t",Mat1[I][J]);
    }

    printf("\n\nThe Second matrix Is :\n");
    for(I=0; I<3; I++)
    {
        printf("\n");
        for(J=0; J<3; J++)
            printf("%d\t",Mat2[I][J]);
    }

    printf("\n\nThe Addition Of Two matrix Is :\n");
    for(I=0; I<3; I++)
    {
        printf("\n");
        for(J=0; J<3; J++)
            printf("%d\t",Mat1[I][J] + Mat2[I][J]);
    }

    printf("\n\n");
    return 0;
}

