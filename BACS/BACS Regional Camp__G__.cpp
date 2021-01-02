#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000
#define PI acos(-1)

int main()
{
    int testcase,num,k;
    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%d %d", &num, &k);
            if(num==2) printf("2 1\n");
            else if(num == 3)
            {
                if(k == 1) printf("2 3 1\n");
                else printf("3 1 2\n");
            }
            else if(num == 4)
            {
                if(k == 1) printf("2 1 4 3\n");
                else if(k == 2) printf("2 3 4 1\n");
                else if(k == 3) printf("2 4 1 3\n");
                else if(k == 4) printf("3 1 4 2\n");
                else if(k == 5) printf("3 4 1 2\n");
                else if(k == 6) printf("3 4 2 1\n");
                else if(k == 7) printf("4 1 2 3\n");
                else if(k == 8) printf("4 3 1 2\n");
                else if(k == 9) printf("4 3 2 1\n");
            }
        }
    }
    return 0;
}

