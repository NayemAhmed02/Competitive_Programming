#include<stdio.h>

int main()
{
    char FU,TU;
    double FV,MV,TV;
    printf("Enter Your Unit Conversion Choice Following by Lower Table: \n\n");

    printf("Feet: a\n");
    printf("Inch: b\n");
    printf("Metre: d\n");
    printf("Mile: e\n");
    printf("Nano meter: f\n");
    printf("Yard: g\n");
    printf("Mili meter: h\n");
    printf("Centi meter: i\n");
    printf("Deci meter: j\n");
    printf("Deca meter: k\n");
    printf("Hecto meter: l\n");
    printf("Kilo meter: m\n");

    printf("\nEnter First The Input Unit Format  Then The Output Unit Format : ");
    scanf("%c %c",&FU,&TU);
    printf("\nEnter The Input Value : ");
    scanf("%lf",&FV);
    if(FU == 'a') MV = FV / 3.28084;
    else if(FU == 'b') MV = FV / 39.370079;
    else if(FU == 'd') MV = FV ;
    else if(FU == 'e') MV = FV / 0.000621;
    else if(FU == 'f') MV = FV / 1000000000;
    else if(FU == 'g') MV = FV / 1.093613;
    else if(FU == 'h') MV = FV / 1000;
    else if(FU == 'i') MV = FV / 100;
    else if(FU == 'j') MV = FV / 10;
    else if(FU == 'k') MV = FV / 0.1;
    else if(FU == 'l') MV = FV / 0.01;
    else if(FU == 'm') MV = FV / 0.001;
    else printf("Invalid Input Unit Format\n\n");

    if(TU == 'a') TV = MV * 3.28084;
    else if(TU == 'b') TV = MV * 39.370079;
    else if(TU == 'd') TV = MV ;
    else if(TU == 'e') TV = MV * 0.000621;
    else if(TU == 'f') TV = MV * 1000000000;
    else if(TU == 'g') TV = MV * 1.093613;
    else if(TU == 'h') TV = MV * 1000;
    else if(TU == 'i') TV = MV * 100;
    else if(TU == 'j') TV = MV * 10;
    else if(TU == 'k') TV = MV * 0.1;
    else if(TU == 'l') TV = MV * 0.01;
    else if(TU == 'm') TV = MV * 0.001;
    else printf("Invalid Output Unit Format\n\n");

    printf("\nOutput Is : %lf\n",TV);

    return 0;
}
