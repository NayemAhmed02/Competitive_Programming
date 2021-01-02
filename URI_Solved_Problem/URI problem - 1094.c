#include<stdio.h>

int main()
{
    int N,A,I,SUM=0,TC=0,TS=0,TR=0;
    double X,Y,Z;
    char ch,c = '%';
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%d %c",&A, &ch);
        if(ch == 'C') TC = TC + A;
        else if(ch == 'R') TR = TR + A;
        else if(ch == 'S') TS = TS + A;
        SUM = SUM + A;
    }
    X = (TC * 100.00) / SUM;
    Y = (TR * 100.00) / SUM;
    Z = (TS * 100.00) / SUM;
    printf("Total: %d cobaias\n",SUM);
    printf("Total de coelhos: %d\n",TC);
    printf("Total de ratos: %d\n",TR);
    printf("Total de sapos: %d\n",TS);
    printf("Percentual de coelhos: %.2lf %c\n",X,c);
    printf("Percentual de ratos: %.2lf %c\n",Y,c);
    printf("Percentual de sapos: %.2lf %c\n",Z,c);

    return 0;
}
