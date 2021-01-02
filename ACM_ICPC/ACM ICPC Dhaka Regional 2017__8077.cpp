#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sc,sr,dc,dr;

    while(scanf("%d %d %d %d", &sr, &sc, &dr, &dc) != EOF)
    {
        if(sr==0 && sc==0 && dr==0 && dc==0)
            break;
        int ans = abs(sr-dr);
        ans = ans + (abs(sc-dc));

        printf("%d", ans);
    }
    return 0;
}
