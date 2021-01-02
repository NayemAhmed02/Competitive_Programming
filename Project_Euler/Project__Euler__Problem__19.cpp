#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sun=0,t = 7;

    for(int i=1; i<101; i++)
    {
        if(i % 4 == 0)
        {
            if(t == 1) sun++;
            int jan = (31-t) % 7;
            if(jan == 0) sun++;
            t = 7-jan;
            int feb = (29-t) % 7;
            if(feb == 0) sun++;
            t = 7-feb;
            int mar = (31-t) % 7;
            if(mar == 0) sun++;
            t = 7-mar;
            int apr = (30-t) % 7;
            if(apr == 0) sun++;
            t = 7-apr;
            int may = (31-t) % 7;
            if(may == 0) sun++;
            t = 7-may;
            int jun = (30-t) % 7;
            if(jun == 0) sun++;
            t = 7-jun;
            int jul = (31-t) % 7;
            if(jul == 0) sun++;
            t = 7-jul;
            int aug = (31-t) % 7;
            if(aug == 0) sun++;
            t = 7-aug;
            int sep = (30-t) % 7;
            if(sep == 0) sun++;
            t = 7-sep;
            int oct = (31-t) % 7;
            if(oct == 0) sun++;
            t = 7-oct;
            int nov = (30-t) % 7;
            if(nov == 0) sun++;
            t = 7-nov;
            int dec = (31-t) % 7;
            t = 7-dec;
        }
        else
        {
            if(t == 1) sun++;
            int jan = (31-t) % 7;
            if(jan == 0) sun++;
            t = 7-jan;
            int feb = (28-t) % 7;
            if(feb == 0) sun++;
            t = 7-feb;
            int mar = (31-t) % 7;
            if(mar == 0) sun++;
            t = 7-mar;
            int apr = (30-t) % 7;
            if(apr == 0) sun++;
            t = 7-apr;
            int may = (31-t) % 7;
            if(may == 0) sun++;
            t = 7-may;
            int jun = (30-t) % 7;
            if(jun == 0) sun++;
            t = 7-jun;
            int jul = (31-t) % 7;
            if(jul == 0) sun++;
            t = 7-jul;
            int aug = (31-t) % 7;
            if(aug == 0) sun++;
            t = 7-aug;
            int sep = (30-t) % 7;
            if(sep == 0) sun++;
            t = 7-sep;
            int oct = (31-t) % 7;
            if(oct == 0) sun++;
            t = 7-oct;
            int nov = (30-t) % 7;
            if(nov == 0) sun++;
            t = 7-nov;
            int dec = (31-t) % 7;
            t = 7-dec;
        }
    }
    printf("%d\n",sun);

    return 0;
}
