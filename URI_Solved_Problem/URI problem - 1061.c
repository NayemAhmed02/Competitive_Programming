#include<stdio.h>

int main()
{
    int sd,sh,sm,ss;
    int ed,eh,em,es;
    int W,X,Y,Z;
    char ch[5];
    scanf("%s%d",ch, &sd);
    scanf("%d%s%d%s%d",&sh,ch,&sm,ch,&ss);

    scanf("%s%d",ch, &ed);
    scanf("%d%s%d%s%d",&eh,ch,&em,ch,&es);

    if(es >= ss) Z = es - ss;
    else
    {
        Z = (60+es) - ss;
        em--;
    }
    if(em >= sm) Y = em - sm;
    else
    {
        Y = (60+em) - sm;
        eh--;
    }
    if(eh >= sh) X = eh - sh;
    else
    {
        X = (24+eh) - sh;
        ed--;
    }
    W = ed - sd;
    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);

    return 0;
}
