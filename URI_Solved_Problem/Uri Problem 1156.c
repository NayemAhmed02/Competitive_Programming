#include<stdio.h>

int main()
{
    int J;
    double I,R,S = 0.0;

    for(I=1.0,J=1; I<=39.0; I=I+2,J=J*2)
    {
      R = I/J;
      S = S+R;
    }
    printf("%.2lf\n",S);
    return 0;
}

