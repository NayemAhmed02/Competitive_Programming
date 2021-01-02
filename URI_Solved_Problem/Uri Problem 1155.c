#include<stdio.h>

int main()
{
    int I;
    double R,S = 0.0;

    for(I=1; I<=100; I++)
    {
      R = 1.0/I;
      S = S+R;
    }
    printf("%.2lf\n",S);
}
