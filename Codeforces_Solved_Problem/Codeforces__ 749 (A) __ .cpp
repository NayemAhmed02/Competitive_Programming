#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        if(n % 2 == 0)
        {
            int half = n/2;
            printf("%d\n",half);
            for(int i=0; i<half; i++)
                printf("2 ");
            printf("\n");
        }
        else
        {
            int half = n/2;
            printf("%d\n",half);
            for(int i=1; i<half; i++)
                printf("2 ");
            printf("3\n");
        }
    }
    return 0;
}
