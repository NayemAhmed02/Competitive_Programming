#include<bits/stdc++.h>
using namespace std;

#define SIZE 200010

int main()
{
    int num,test,i,de=0;
    int arr[SIZE],coun[SIZE];
    memset(coun,0,SIZE*sizeof(coun[0]));

    scanf("%d %d", &num, &test);

    for(i=0; i<num; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            if(arr[i] >= arr[j]) coun[i]++;
        }
        if(coun[i] == test)
        {
            de = 1;
            break;
        }
    }
    if(de == 1) printf("%d\n",arr[i]);
    else printf("-1\n");

    return 0;

}
