#include<stdio.h>

int main()
{
    double Mat[2][2];
    double D;
    int I,J;

    printf("Enter the Matrix : ");
    for(I=0; I<2; I++)
        for(J=0; J<2; J++)
            scanf("%lf", &Mat[I][J]);

    printf("The Matrix Is :\n");
    for(I=0; I<2; I++)
    {
        printf("\n");
        for(J=0; J<2; J++)
            printf("%.2lf\t",Mat[I][J]);
    }
    D = (Mat[0][0] * Mat[1][1]) - (Mat[0][1] * Mat[1][0]);
    Mat[1][0] = Mat[0][1] + Mat[1][0];
    Mat[0][1] = Mat[1][0] - Mat[0][1];
    Mat[1][0] = Mat[1][0] - Mat[0][1];
    printf("\n\nThe Inverse Matrix Is : \n");

    for(I=1; I>=0; I--)
    {
        printf("\n");
        for(J=1; J>=0; J--)
        {
           if(I == J) printf("%.2lf\t",Mat[I][J] / D);
           else printf("%.2lf\t",-(Mat[I][J] / D));
        }
    }
    printf("\n\n");
    return 0;
}
