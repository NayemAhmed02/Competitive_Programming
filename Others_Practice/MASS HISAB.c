#include<stdio.h>

int main()
{
    double NA,MJ,MB,TH;

    printf("Enter the total value of Nayem : " );
    scanf("%lf", &NA);
    printf("Enter the total value of Mridul : " );
    scanf("%lf", &MJ);

    printf("Enter the total value of Maruf : " );
    scanf("%lf", &MB);
    printf("Enter the total value of Tahmid : " );
    scanf("%lf", &TH);

    printf(" \n");


    double TC,TM,MR,KG;

    printf("Enter the total cost : ");
    scanf("%lf", &TC);
    printf("Enter the total meal : ");
    scanf("%lf", &TM);

    printf("Enter the khala and gas bill : ");
    scanf("%lf", &KG);
    MR=TC/TM;
    printf("Meal Rate Is : %lf\n",MR);

    printf(" \n");


    double NAM,MJM,MBM,THM;

    printf("Nayem total meal : ");
    scanf("%lf", &NAM);
    printf("Mridul total meal : ");
    scanf("%lf", &MJM);

    printf("Maruf total meal : ");
    scanf("%lf", &MBM);
    printf("Tahmid total meal : ");
    scanf("%lf", &THM);

    printf(" \n");


    double Nay,Mri,Mar,Tah;

    Nay = NA-(NAM * MR + KG);
    Mri = MJ-(MJM * MR + KG);
    Mar = MB-(MBM * MR + KG);
    Tah = TH-(THM * MR + KG);

    printf("NAYEM = %lf\n",Nay);
    printf("MRIDUL = %lf\n",Mri);
    printf("MARUF = %lf\n",Mar);
    printf("TAHMID = %lf\n",Tah);

    return 0;
}



