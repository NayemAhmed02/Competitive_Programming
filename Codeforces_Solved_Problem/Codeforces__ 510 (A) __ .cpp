#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,column;

    while(scanf("%d %d", &row, &column) != EOF)
    {
        int condi = 0;
        for(int i=0; i<row; i++)
        {
            if(i % 2 != 0 && condi == 0)
            {
                for(int j=1; j<column; j++)
                    printf(".");
                printf("#\n");
                condi = 1;
            }
            else if(i % 2 != 0 && condi == 1)
            {
                printf("#");
                for(int j=2; j<column; j++)
                    printf(".");
                printf(".\n");
                condi = 0;
            }
            else
            {
                for(int j=1; j<column; j++)
                    printf("#");
                printf("#\n");
            }
        }
    }
    return 0;
}
