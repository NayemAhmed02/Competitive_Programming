#include<stdio.h>
#include<math.h>

int main()
{
    char In[11],Ou[11];
    long long int DN,I,S,L,V,J,K,R;
    for( ; ; )
    {
        scanf("%s",In);
        if(In[0] == '-') break;
        else if(In[0] == '0' && In[1] == 'x')
        {
            L = 2;
            DN = 0;
            while(In[L] != '\0')
                L++;
            L = L-3;
            for(I=2; In[I]!='\0'; I++)
            {
                if(In[I]>='0' && In[I]<='9') V = In[I] - 48;
                else if(In[I]>='a' && In[I]<='f') V = In[I] - 87;
                else if(In[I]>='A' && In[I]<='F') V = In[I] - 55;
                S = 0;
                K = 1;
                for(J=0; J<=L; J++)
                {
                    S = K * V;
                    K = K * 16;
                }
                DN = DN + S;
                L--;
            }
            printf("%lld\n",DN);

        }
        else
        {
            L = 0;
            DN = 0;
            while(In[L] != '\0')
                L++;
            for(I=0; In[I]!='\0'; I++)
            {
                if(In[I]>='0' && In[I]<='9') V = In[I] - 48;
                else if(In[I]>='a' && In[I]<='f') V = In[I] - 87;
                else if(In[I]>='A' && In[I]<='F') V = In[I] - 55;
                S = 0;
                K = 1;
                for(J=0; J<L; J++)
                {
                    S = K * V;
                    K = K * 10;
                }
                DN = DN + S;
                L--;
            }
            J = 0;
            while(DN > 0)
            {
              R = DN % 16;
              if(R <= 9) Ou[J] = R + 48;
              else Ou[J] = R + 55;
              DN = DN / 16;
              J++;
            }
            Ou[J] = 'x';
            J++;
            Ou[J] = '0';

            for(I=J; I>=0; I--)
                printf("%c",Ou[I]);
            printf("\n");
        }
    }
    return 0;
}
