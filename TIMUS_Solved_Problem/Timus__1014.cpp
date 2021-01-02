#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

int main()
{
    int i,j,num,ele[SIZE];

    while(scanf("%d", &num) != EOF)
    {
        if(num == 0) printf("10\n");
        else if(num == 1) printf("1\n");
        else
        {
            j = 0;
            for(i=9; i>=2; i--)
            {
                while(num % i == 0)
                {
                    ele[j] = i;
                    num = num / i;
                    j++;
                }
            }
            if(num == 1)
            {
                sort(ele, ele+j);
                for(i=0; i<j; i++)
                    printf("%d",ele[i]);
                printf("\n");
            }
            else
                printf("-1\n");
        }
    }
    return 0;
}


