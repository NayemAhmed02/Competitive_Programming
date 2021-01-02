// For Binary Search Algorithm It is guaranteed that array elements will must be in sorted order. Ascending or descending
// or Alphabetically otherwise Binary Search Algorithm does not work.

#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int linear_search(int arr[], int num, int sample)
{
    int left = 0, right = num-1, mid;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(arr[mid] == sample)
            return mid;
        else if(arr[mid] > sample)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int arra[SIZE],numb,samp = 100;

    printf("Enter the number of array element: ");
    scanf("%d", &numb);

    for(int i=0; i<numb; i++)
        scanf("%d", &arra[i]);

    int result = linear_search(arra, numb, samp);

    if(result == -1) printf("%d does not found in given array\n",samp);
    else printf("%d stand on %d index\n",samp,result);

    return 0;
}

