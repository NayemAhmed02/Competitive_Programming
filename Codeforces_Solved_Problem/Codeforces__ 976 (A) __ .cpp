#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    char str[SIZE];
    int totalone,num;

    while(scanf("%d", &num) != EOF)
    {
        getchar();
        gets(str);
        totalone = 0;
        for(int i=0; i<num; i++)
            if(str[i] == '1') totalone++;
        if(totalone == 0) printf("0\n");
        else
        {
            printf("1");
            int dife = num - totalone;
            for(int i=0; i<dife; i++)
                printf("0");
            printf("\n");
        }
    }
    return 0;
}
