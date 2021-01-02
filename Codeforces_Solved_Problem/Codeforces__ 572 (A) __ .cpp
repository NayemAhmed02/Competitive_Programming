#include<bits/stdc++.h>
using namespace std;

int main()
{
    int na,nb;
    int k,m,ar_na[10010],ar_nb[10010];


    scanf("%d %d", &na, &nb);

    scanf("%d %d", &k, &m);

    for(int i=0; i<na; i++)
        scanf("%d", &ar_na[i]);

    for(int j=0; j<nb; j++)
        scanf("%d", &ar_nb[j]);

    if(ar_na[k-1] < ar_nb[nb-m])
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
