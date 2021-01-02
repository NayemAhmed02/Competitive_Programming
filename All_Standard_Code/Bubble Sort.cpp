#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int bubble_sort(int arr[], int num)
{
    int condition,temp;

    for(int i=0; i<num; i++)
    {
        condition = num-i-1;

        for(int j=0; j<condition; j++)
        {
            if(arr[j] > arr[j+1])
               swap(arr[j], arr[j+1]);
        }
    }

    return 0;
}

int main()
{
    int arra[SIZE],numb;

    printf("Enter the number of array element: ");
    scanf("%d", &numb);

    for(int i=0; i<numb; i++)
        scanf("%d", &arra[i]);

    bubble_sort(arra, numb);

    printf("After Sorted in ascending order: \n\n\n");

    for(int i=0; i<numb; i++)
        printf("%d\n",arra[i]);

    return 0;
}
