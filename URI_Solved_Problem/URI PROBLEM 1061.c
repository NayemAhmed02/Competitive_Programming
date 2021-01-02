#include<stdio.h>

int main()
{
    int D,H,M,S;
    int d,h,m,s;
    int W,X,Y,Z;
    char ch = ':';

    printf("Dia ");
    scanf("%d",&D);
    scanf("%d %c %d %c %d",&H,&ch,&M,&ch,&S);

    printf("Dia ");
    scanf("%d",&d);
    scanf("%d %c %d %c %d",&h,&ch,&m,&ch,&s);

    if(s >= S)
    {
        Z = s-S;
        if(m >= M)
        {
            Y = m-M;
        }
    }
    if(s < S)
    {
        Z = (s+60)-S;
        if(m > M)
        {
            Y = m-(M+1);
        }
    }

    if(m >= M)
    {
        Y = m - M;
        if(h >= H)
        {
            X = h-H;
        }
    }
    if(m < M)
    {
        Y = (m+60)-M;
        if(h > H)
        {
            X = h-(H+1);
        }
    }
    if(h > H)
    {
        W = d-D;
    }
    else
    {
        W = d-(D+1);
    }
    printf("Dia %d\n",W);
    printf("Hora %d\n",X);
    printf("minu %d\n",Y);
    printf("sec %d\n",Y);

}
