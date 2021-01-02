#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int insertion_sort(int arr[], int num)
{
    int condition,temp;
    num--;
    for(int i=0; i<num; i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp = arr[i+1];
            condition = 0;
            for(int j=i; j>=0; j--)
            {
                if(temp > arr[j])
                {
                    arr[j+1] = temp;
                    condition = 1;
                    break;
                }
                else
                    arr[j+1] = arr[j];
            }
            if(condition == 0) arr[0] = temp;
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

    insertion_sort(arra, numb);

    printf("After Sorted in ascending order: \n\n\n");

    for(int i=0; i<numb; i++)
        printf("%d\n",arra[i]);

    return 0;
}

