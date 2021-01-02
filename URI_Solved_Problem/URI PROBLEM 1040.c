#include<stdio.h>

int main()
{
    double N1,N2,N3,N4,M,P,A;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    M = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;
    printf("Media: %.1lf\n",M);

    if(M >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(M < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&P);
        printf("Nota do exame: %.1lf\n",P);
        A = (M + P) / 2;
        if(A >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",A);
    }
    return 0;
}
