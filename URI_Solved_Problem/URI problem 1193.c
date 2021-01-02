#include<stdio.h>
#include<string.h>
#include<math.h>

/*int Func(int j,char sr[35])
{
   int i,dn=0,s=0,v;
   for(i=j; i>=0; i++)
   {
      v = sr[s] - 48;
      dn = dn + (v * pow(10,j));
      s++;
   }
   return dn;
}*/

int main()
{
   int N,I,J,K,L,L1,M,V,S,P=10,DN,BN,HD;
   char X[35],RN[32];
   scanf("%d", &N);
   getchar();
   for(I=1; I<=N; I++)
   {
      gets(X);
      L = strlen(X);
      if(X[L-3] == 'd')
      {
         DN = 0;
         S = 0;
         for(J=L-5; J>=0; J--)
         {
             V = X[S] - 48;
             L1 = pow(P,J);
             DN = DN + (V * L1);
             S++;
         }
        // DN = Func(L-5,X);
         printf("Case %d:\n%d hex\n",I,DN);
         M = 0;
         while(DN>0)
         {
             RN[M] = (DN % 2) + 48;
             DN = DN / 2;
             M++;
         }
         for(K=M-1; K>=0; K--)
            printf("%c",RN[K]);
         printf(" bin\n\n");
      }
      else if(X[L-3] == 'b')
      {
          L = L - 5;
          L1 = L;
          BN =0;
          for(J=0; J<=L; J++)
          {
             S = 0;
             K = 1;
             V = X[J] - 48;
             for(M=0; M<=L1; M++)
             {
                 S = K * V;
                 K = K * 10;
             }
             BN = BN + S;
             L1--;
          }
          K = 1;
          DN = 0;
          while(BN > 0)
          {
              P = BN % 10;
              DN = DN + (P * K);
              K = K * 2;
              BN = BN / 10;
          }
           printf("Case %d:\n%d dec\n%x hex\n\n",I,DN,DN);
      }
      else if(X[L-3] == 'h')
      {
          L = L - 5;
          L1 = L;
          DN =0;
          for(J=0; J<=L; J++)
          {
             S = 0;
             K = 1;
             if(X[J]>='0' && X[J]<='9') V = X[J] - 48;
             else if(X[J]>='a' && X[J]<='f') V = X[J] - 87;
             else V = X[J] - 55;
             for(M=0; M<=L1; M++)
             {
                 S = K * V;
                 K = K * 16;
             }
             DN = DN + S;
             L1--;
          }
          S = 0;
          M = 0;
          HD = DN;
          while(DN > 0)
          {
             P = DN % 2;
             S = (S+P)*10;
             DN = DN / 2;
             M++;
          }
          S = S/10;
          BN = 0;
          for(J=0; J<M; J++)
          {
              P = S % 10;
              BN = (BN+P)*10;
              S = S / 10;
          }
          BN = BN /10;
          printf("Case %d:\n%d dec\n%d bin\n\n",I,HD,BN);
      }
   }
   return 0;
}
