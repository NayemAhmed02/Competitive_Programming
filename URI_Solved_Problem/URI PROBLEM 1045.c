#include<stdio.h>

int main()
{
    double A,B,C,a;
    scanf("%lf %lf %lf",&a,&B,&C);

    if(a >= B && a >= C)
    {
         A = a;
    }
    else if(B >= a && B >= C)
    {
         A = B;
         B = a;
    }
    else if(C >= a && C >= B)
    {
        A = C;
        C = a;
    }


    if(A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {

    if((A*A) == (B*B) + (C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    if((A*A) > (B*B) + (C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if((A*A) < (B*B) + (C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    if(A == B && B != C || B == C && C != A || C == A && A != B)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
