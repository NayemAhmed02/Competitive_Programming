#include<stdio.h>
#include<math.h>

int main()
{
    int A,B,C,D;
    double Area;

    for( ; ; )
    {
        scanf("%d", &A);
        if(A == 0) break;
        scanf("%d %d", &B, &C);
        Area = (A * B * 100.0) / C;
        D = sqrt(Area);
        printf("%d\n",D);
    }
    return 0;
}
