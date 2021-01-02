#include<stdio.h>

int main()
{
    int Mat[10][10];
    int I,J,R,C;
    printf("Enter First Row Number Then Colume Nyumber : ");
    scanf("%d %d",&R,&C);

    printf("Enter the Matrix : ");
    for(I=0; I<R; I++)
        for(J=0; J<C; J++)
            scanf("%d", &Mat[I][J]);

    printf("The Matrix Is :\n");
    for(I=0; I<R; I++)
    {
        printf("\n");
        for(J=0; J<C; J++)
            printf("%d\t",Mat[I][J]);
    }

    printf("\n\nThe Transport Matrix Is :\n");
    for(I=0; I<C; I++)
    {
        printf("\n");
        for(J=0; J<R; J++)
            printf("%d\t",Mat[J][I]);
    }

    printf("\n\n");
    return 0;
}
