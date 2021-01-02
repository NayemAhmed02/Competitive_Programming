#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

int main()
{
    int parti,way,zero,score[SIZE];

    while(scanf("%d", &parti) != EOF)
    {
        for(int i=0; i<parti; i++)
            scanf("%d", &score[i]);
        sort(score, score+parti);
        way = 0;
        zero = 0;
        if(score[parti-1] == 0) zero++;
        for(int j=0; j<parti-1; j++)
        {
            if(score[j] == 0) zero++;
            else
                if(score[j] != score[j+1]) way++;
        }
        way++;
        if(zero != 3) printf("%d\n",way);
    }
    return 0;
}
