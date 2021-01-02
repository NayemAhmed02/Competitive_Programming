#include<stdio.h>

int main()
{
    int I;

    do
    {
        printf("Mailing list menu :  \n \n \n");
        printf("1. Enter addresses\n \n");
        printf("2. Delate addresses\n \n");
        printf("3. Search the list\n \n");
        printf("4. Print the list\n \n");
        printf("5. Quit\n \n");
        printf("Enter the number of your choice (1-5) : ");
        scanf("%d", &I);
    }
    while(I != 1);
    {
        printf(" \n \nCONGRATULATION !!!\nYou Reach Your Goal.\n");
    }
    return 0;
}
