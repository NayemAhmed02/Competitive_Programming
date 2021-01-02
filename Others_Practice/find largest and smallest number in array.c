#include<stdio.h>

int main()
{
    int ara[100];
    int i,j,n,max,min;
    printf("Enter the element number of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements :\n");
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    for(i=0; i<n-1; i++)
    {
        if(ara[i]>ara[i+1])
        {
            max = ara[i];
            ara[i+1] = ara[i];
        }
        else max = ara[i+1];
    }
    for(i=0; i<n-1; i++)
    {
        if(ara[i]<ara[i+1])
        {
            min = ara[i];
            ara[i+1] = ara[i];
        }
        else min = ara[i+1];
    }
    printf("\nLargest Number Is : %d\n",max);
    printf("\nSmallest Number Is : %d\n",min);

    return 0;
}
