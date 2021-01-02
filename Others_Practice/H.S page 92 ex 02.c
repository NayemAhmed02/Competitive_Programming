#include<stdio.h>

int main()
{
    int i;
    double t,f,tw;
    char ch;

    for(i=1; i<101; i=i+1)
    {
        t = (10 * i)/100;
        f = (15 * i)/100;
        tw = (20 * i)/100;
        printf("TEN PER : %lf\n",t);
        printf("FIFTEEN PER : %lf\n",f);
        printf("TWENTY PER : %lf\n",tw);

        printf("Are You Want To Continuo (Press Y or N): ");
        ch = getchar();


        if(ch == 'N')
            break;
    }
    return 0;
}

