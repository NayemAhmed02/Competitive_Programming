#include<bits/stdc++.h>
using namespace std;

#define SIZE 1010

int main()
{
    int num,d,elem[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        for(int i=0; i<num; i++)
            scanf("%d", &elem[i]);
       sort(elem, elem+num);
       if(num == 1) printf("%d\n",elem[0]);
       else
       {
           d = num / 2;
           if(num % 2 == 0) printf("%d\n",elem[d-1]);
           else printf("%d\n",elem[d]);
       }
    }
    return 0;
}
