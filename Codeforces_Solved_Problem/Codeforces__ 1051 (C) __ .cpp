#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,arr[110],tot[110];

    while(scanf("%d", &num) != EOF)
    {
        memset(tot,0,sizeof(tot));
        for(int i=0; i<num; i++)
        {
            scanf("%d", &arr[i]);
            tot[arr[i]]++;
        }

        int nice = 0;
        int nice3 = 0;

        for(int i=0; i<num; i++)
        {
            int def = 0;
            for(int j=0; j<num; j++)
                if(arr[i] == arr[j]) def++;

            if(def == 1) nice++;
            if(def > 2) nice3++;
        }

        if(nice == 0)
        {
            printf("YES\n");
            for(int i=0; i<num; i++)
                printf("A");
            printf("\n");
        }

        else if((nice % 2 != 0) && nice3 == 0)
            printf("NO\n");

        else if(nice % 2 == 0)
        {
            //printf("come");
            printf("YES\n");
            int t1 = 0;
            for(int i=0; i<num; i++)
            {
                if(tot[arr[i]] == 1)
                {
                    if(t1 == 0)
                    {
                        printf("A");
                        t1 = 1;
                    }
                    else
                    {
                        printf("B");
                        t1 = 0;
                    }
                }
                else
                    printf("A");
            }
            printf("\n");
        }

        else
        {
            printf("YES\n");
            int t1 = 0;
            int t3 = 0;
            for(int i=0; i<num; i++)
            {
                if(tot[arr[i]] == 1)
                {
                    if(t1 == 0)
                    {
                        printf("A");
                        t1 = 1;
                    }
                    else
                    {
                        printf("B");
                        t1 = 0;
                    }
                }
                else if(tot[arr[i]] > 2 && t3 == 0)
                {
                    printf("B");
                    t3 = 1;
                }
                else
                    printf("A");
            }
            printf("\n");
        }
    }
    return 0;
}
