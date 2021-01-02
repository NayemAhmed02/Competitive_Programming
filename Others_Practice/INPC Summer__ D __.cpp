#include<bits/stdc++.h>
using namespace std;

#define SIZE 100000
#define SIZ 2

double cgpa[SIZE][SIZ],diff[SIZE];

int main()
{
    int N,R;

    while(scanf("%d %d", &N, &R) != EOF)
    {
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%lf", &cgpa[i][j]);
            }
        }
        int k = 0;
        double sum = 0.0;
        for(int i=0; i<N; i++)
        {
            sum += cgpa[i][0];
            if(cgpa[i][1] > cgpa[i][0])
            {
                diff[k++] = (cgpa[i][1] - cgpa[i][0]);
            }
        }
        sort(diff, diff+k, greater<double>());
        for(int i=0; i<k; i++)
        {
            if(R > 0)
            {
                sum += diff[i];
                R--;
            }
            else
                break;
        }
        double result = sum / N;
        printf("%.2lf\n",result);

    }
    return 0;
}

