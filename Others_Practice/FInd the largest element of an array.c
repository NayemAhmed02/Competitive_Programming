#include<stdio.h>

int main()
{
    int ar[100];
    int i,n,m;
    printf("Enter total element of an array : ");
    scanf("%d", &n);
    printf("\n\nEnter the elements : ");
    for(i=0; i<n; i++)
        scanf("%d", &ar[i]);
    for(i=0; i<n-1; i++)
    {
        if(ar[i] > ar[i+1])
        {
            m = ar[i];
            ar[i+1] = ar[i];
        }
        else m = ar[i+1];
    }
    printf("\n\nThe largest element of given array : %d\n",m);
    return 0;
}
