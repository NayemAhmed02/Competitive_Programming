#include<bits/stdc++.h>
using namespace std;

int main()
{
    char fi[15],fi2[15],na[15],na2[15];
    int n;

    while(scanf("%s %s", &fi, &fi2) != EOF)
    {
        scanf("%d", &n);
        printf("%s %s\n",fi,fi2);

        for(int i=1; i<=n; i++)
        {
            scanf("%s %s", &na, &na2);

            if(strcmp(fi, na) == 0)
                strcpy(fi, na2);
            else
                strcpy(fi2, na2);

            printf("%s %s\n",fi, fi2);
        }
    }
    return 0;
}
