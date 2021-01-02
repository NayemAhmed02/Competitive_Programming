#include<stdio.h>

int main()
{
    double NUM;
    printf("Enter the value : ");
    scanf("%lf", &NUM);

    int choice;
    printf("1 :Feet To Meters\n2 :Meters To Feet\n");
    printf("Enter choice : ");
    scanf("%d", &choice);
    printf("  \n");

    if(choice == 1)
    {
        printf("%lf Feet = %lf Meters\n",NUM,NUM/3.28);
    }
    else if(choice == 2)
    {
        printf("%lf Meters = %lf Feet\n",NUM,NUM*3.28);
    }
    return 0;


}
