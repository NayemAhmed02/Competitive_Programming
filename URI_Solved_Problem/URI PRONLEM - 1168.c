#include<stdio.h>

int main()
{
    int N,I,J,L,Sum=0;
    char str[110];
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%s", &str);
        Sum = 0;
        for(J=0; str[J]!='\0'; J++)
        {
          if(str[J] == '0') L = 6;
          else if(str[J] == '1') L = 2;
          else if(str[J] == '2') L = 5;
          else if(str[J] == '3') L = 5;
          else if(str[J] == '4') L = 4;
          else if(str[J] == '5') L = 5;
          else if(str[J] == '6') L = 6;
          else if(str[J] == '7') L = 3;
          else if(str[J] == '8') L = 7;
          else if(str[J] == '9') L = 6;
          Sum = Sum + L;
        }
        printf("%d leds\n",Sum);
    }
    return 0;
}
