#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sample;

    while(scanf("%d", &sample) != EOF)
    {
        int a=sample/2,b,c,ans = 0;
        for(int i=1; i<=a; i++)
        {
            int test = 1;
            for(int j=i+1; j<= sample; j+=test)
            {
                int test1 = 1;
                int sam = 0;
                for(int k=j+1; k<=sample; k+=test1)
                {
                    //int test1 = i+j-k;
                    //int test2 = i+k-j;
                    //int test3 = k+j-i;
                    double t1 = log2(i+j-k);
                    double t2 = log2(i+k-j);
                    double t3 = log2(j+k-i);
                    int p1 = (int) t1;
                    int p2 = (int) t2;
                    int p3 = (int) t3;

                    if((p1==t1) && (p2==t2) &&(p3==t3))
                    {
                        ans++;
                        test1 *= 2;
                        sam = 1;
                        //printf("%d %d %d %d\n",i,j,k,ans);
                    }
                }
                if(sam == 1) test *= 2;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
