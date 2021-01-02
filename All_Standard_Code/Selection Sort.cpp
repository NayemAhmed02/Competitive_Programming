#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int selection_sort(int arr[], int num)
{
    int num1 = num-1;

    for(int i=0; i<num1; i++)
    {
        int defin = i;

        for(int j=i+1; j<num; j++)
        {
            if(arr[j] < arr[defin])
                defin = j;
        }
        if(defin != i)
            swap(arr[i], arr[defin]);
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

    selection_sort(arra, numb);

    printf("After Sorted in ascending order: \n\n\n");

    for(int i=0; i<numb; i++)
        printf("%d\n",arra[i]);

    return 0;
}
