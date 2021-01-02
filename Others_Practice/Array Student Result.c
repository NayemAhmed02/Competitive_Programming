#include<stdio.h>

int main()
{
    int f[5] = {72,75,78,81,84};
    int s[5] = {70,75,80,85,90};
    int e[5] = {72,74,76,78,80};
    double t[5];
    int i;
    for(i=0; i<5; i++)
    {
        t[i] = f[i]/4.0 + s[i]/4.0 + e[i]/2.0;
        printf("Roll No %d = %lf Marks\n",i+1,t[i]);
    }
    return 0;
}
