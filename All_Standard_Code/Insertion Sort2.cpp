#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int insertion_sort(int arr[], int num)
{
    int temp;
    for(int i=1; i<num; i++)
    {
        temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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

    insertion_sort(arra, numb);

    printf("After Sorted in ascending order: \n\n\n");

    for(int i=0; i<numb; i++)
        printf("%d\n",arra[i]);

    return 0;
}

