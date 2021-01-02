#include<bits/stdc++.h>
using namespace std;

#define SIZE 22

int main()
{
    int i,j,num,element[SIZE],total,halftotal,sum=0,minidef=0;

    scanf("%d", &num);

    for(i=0; i<num; i++)
        scanf("%d", &element[i]);
    sort(element, element+num);
    for(i=0; i<num; i++)
        total += element[i];
    halftotal = total / 2;
    for(i=0; i<num; i++)
    {
        sum += element[i];
        if(sum >= halftotal) break;
    }
    minidef = total - sum;
    minidef = minidef - sum;
    minidef = fabs(minidef);

    printf("%d\n",minidef);

    return 0;
}
