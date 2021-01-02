#include<stdio.h>

int main()
{
    char ch;
    printf("Choice A Option (C or R or T)  : ");
    scanf("%c", &ch);

    double CR,RL,RW,TB,TH;

    if(ch == 'C')
    {
        printf(" \nEnter Circle Radius : ");
        scanf("%lf", &CR);

        printf(" \n \nArea Of A Circle : %lf\n",CR * CR * 3.14159);
    }
    else if(ch == 'R')
    {
        printf(" \nEnter Rectangle Length : ");
        scanf("%lf", &RL);

        printf("Enter Rectangle Width : ");
        scanf("%lf", &RW);

        printf(" \n \nArea Of A Rectangle : %lf\n",RL * RW);
    }
    else if(ch == 'T')
    {
        printf(" \nEnter Triangle Base : ");
        scanf("%lf", &TB);

        printf("Enter Triangle Height : ");
        scanf("%lf", &TH);

        printf(" \n \nArea Of A Triangle : %lf",TB * TH * 0.5);
    }
    return 0;
}
