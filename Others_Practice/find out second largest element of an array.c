#include<stdio.h>

int main()
{
    int ar[100],st[100];
    int i,j,n,m;
    printf("Enter total element of an array : ");
    scanf("%d", &n);
    printf("\n\nEnter the elements : ");
    for(i=0; i<n; i++)
        scanf("%d", &ar[i]);
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++ )
        {
            if(ar[i] > ar[j])
            {
                st[i] = ar[j];
                ar[j] = ar[i];
                ar[i] = st[i];

            }
            else
                st[i] = ar[i];
        }
    }
    printf("\n\nThe Second largest element of given array : %d\n",st[n-2]);
    return 0;
}
