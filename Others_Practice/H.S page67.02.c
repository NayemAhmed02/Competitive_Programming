#include<stdio.h>

int main()
{
    double R,RL,RW,RF,TF;

    printf("Total Room Numbers : ");
    scanf("%lf", &R);

    printf("Each Room length : ");
    scanf("%lf", &RL);

    printf("Each Room Width : ");
    scanf("%lf", &RW);

    RF = RL * RW;
    printf("Room Square Footage : %lf\n",RF);

    TF = RF * R;
    printf("Total Square Footage : %lf\n",TF);

    return 0;
}
