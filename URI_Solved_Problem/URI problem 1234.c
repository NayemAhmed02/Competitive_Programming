#include<stdio.h>
#include<string.h>

int main()
{
    int I,J,L;
    char S[51];
    while(gets(S) != NULL)
    {
        J = 0;
        L = strlen(S);
        for(I=0; I<L; I++)
        {

        if(S[I]>=65 && S[I]<=90)
        {
           if(J % 2 != 0) S[I] = S[I] + 32;
           J++;
        }

        else if(S[I]>=97 && S[I]<=122)
        {
           if(J % 2 == 0) S[I] = S[I] - 32;
           J++;
        }
        }
        S[I] = '\0';
        printf("%s\n",S);
    }
    return 0;
}
