#include<stdio.h>

int main()
{
    int QT,I;
    char s1[101],s2[10],s3[101],s4[10];
    long long int N,M;
    scanf("%d", &QT);
    for(I=0; I<QT; I++)
    {
       scanf("%s %s %s %s",s1,s2,s3,s4);
       scanf("%lld %lld", &N, &M);
       if(s2[0] == 'P')
       {
           if((N+M) % 2 == 0) printf("%s\n",s1);
           else printf("%s\n",s3);
       }
       else
       {
           if((N+M) % 2 == 0) printf("%s\n",s3);
           else printf("%s\n",s1);
       }
    }
    return 0;
}
