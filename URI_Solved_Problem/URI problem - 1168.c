#include<stdio.h>

int main()
{
    int N,V,I,L,J,S;
    scanf("%d", &N);

    for(I=0; I<N; I++)
    {
        S = 0;
        scanf("%d", &V);
        while(V > 0)
        {
          J = V % 10;
          if(J == 0) L = 6;
          else if(J == 1) L = 2;
          else if(J == 2) L = 5;
          else if(J == 3) L = 5;
          else if(J == 4) L = 4;
          else if(J == 5) L = 5;
          else if(J == 6) L = 6;
          else if(J == 7) L = 3;
          else if(J == 8) L = 7;
          else if(J == 9) L = 6;
          S = S + L;
          V = V/10;
        }
        printf("%d leds\n",S);
    }
    return 0;
}
