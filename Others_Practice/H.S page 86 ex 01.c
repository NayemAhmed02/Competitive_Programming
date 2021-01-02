#include<stdio.h>

int main()
{
    double G;

    do
    {
        printf("Lequide In Gallons : ");
        scanf("%lf", &G);
        printf("%lf Gallons = %lf Liters .\n \n",G,G*3.7854);
    }
    while(G != 100);
    {
        printf("Loop has been stopped..\n");
    }
    return 0;
}
