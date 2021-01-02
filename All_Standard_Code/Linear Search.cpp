#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int linear_search(int arr[], int num, int sample)
{
    for(int j=0; j<num; j++)
        if(arr[j] == sample) return j;
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
