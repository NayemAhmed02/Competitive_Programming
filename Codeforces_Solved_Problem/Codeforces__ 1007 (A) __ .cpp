#include<bits/stdc++.h>
using namespace std;

#define SIZE 10010

int main()
{
    int num,element[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &element[i]);
        sort(element,element+num);
        int test=0,result = 0;
        for(int i=0; (i<num); )
        {
            int vari = 0,j=i;
            while(element[j] == element[i])
            {
                vari++;
                i++;
            }
            if((i+vari) <= num) result += vari;
            else
            {result = result + (num-i);
            break;
            }
            //test = result+i-1;
        }
        printf("%d\n",result);
    }
    return 0;
}
