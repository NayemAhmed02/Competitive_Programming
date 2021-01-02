#include<stdio.h>
#include<math.h>

int main()
{
    double i,power;
    int m;
    for(i=0; i<7; i++)
    {
        power = pow(5.0,i);       //power function work properly in floating point environment
        m = (int) power;         //type cast
        printf("%d\n",m);
    }
    return 0;
}
