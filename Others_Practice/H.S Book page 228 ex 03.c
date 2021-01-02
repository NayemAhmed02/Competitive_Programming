#include<stdio.h>
#include<math.h>

double hypot(double s1,double s2);

int main()
{
    printf("%lf",hypot(12.0,5.0));
    return 0;
}
double hypot(double s1,double s2)
{
    double h;
    h = s1*s1 + s2*s2;
    return sqrt(h);
}
