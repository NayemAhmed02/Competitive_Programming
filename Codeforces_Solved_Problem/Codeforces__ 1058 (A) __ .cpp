#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    while(scanf("%d", &num) != EOF)
    {
        int opinion,define = 0;
        while(num--)
        {
            scanf("%d", &opinion);
            if(opinion == 1)
                define = 1;
        }
        if(define == 0) printf("EASY\n");
        else printf("HARD\n");
    }
    return 0;
}
