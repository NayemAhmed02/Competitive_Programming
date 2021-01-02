#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cost[1010];
    char str[1010][3];

    while(scanf("%d", &n) != EOF)
    {
        int a[1010],b[1010],c[1010],ab[1010],bc[1010],ca[1010],abc[1010];
        int j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d %s", &cost[i], &str[i]);

            int length = strlen(str[i]);
           // printf("%s\n",str[i]);

            if(!strcmp(str[i], "A")) a[j1++] = cost[i];
            else if(!strcmp(str[i], "B")) b[j2++] = cost[i];
            else if(!strcmp(str[i], "C")) c[j3++] = cost[i];
            else if(!strcmp(str[i], "AB") || !strcmp(str[i], "BA")) ab[j4++] = cost[i];
            else if(!strcmp(str[i], "BC") || !strcmp(str[i], "CB")) bc[j5++] = cost[i];
            else if(!strcmp(str[i], "CA") || !strcmp(str[i], "AC")) ca[j6++] = cost[i];
            else if(length == 3) abc[j7++] = cost[i];

        }
        sort(a, a+j1);
        sort(b, b+j2);
        sort(c, c+j3);
        sort(ab, ab+j4);
        sort(bc, bc+j5);
        sort(ca, ca+j6);
        sort(abc, abc+j7);

        //printf("%d %d %d %d %d %d %d\n",j1,j2,j3,j4,j5,j6,j7);

        int result[10];
        int k = 0;

        if(j1 > 0 && j2>0 && j3>0)
            result[k++] = a[0]+b[0]+c[0];
        if(j1 > 0 && j5 > 0)
            result[k++] = a[0]+bc[0];
        if(j2>0 && j6>0)
            result[k++] = b[0]+ca[0];
        if(j3>0 && j4>0)
            result[k++] = ab[0]+c[0];

        if(j7 > 0)
            result[k++] = abc[0];
        if(j4 > 0 && j5 > 0)
            result[k++] = ab[0] + bc[0];
        if(j4 > 0 && j6 > 0)
            result[k++] = ab[0] + ca[0];
        if(j5 > 0 && j6 > 0)
            result[k++] = bc[0] + ca[0];

        sort(result, result+k);

        if(k == 0)
            printf("-1\n");
        else
            printf("%d\n",result[0]);

    }
    return 0;
}
