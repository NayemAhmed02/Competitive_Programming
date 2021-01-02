#include<stdio.h>
#include<string.h>

int main()
{
    int N,L;
    char input[110];
    scanf("%d", &N);
    while(N)
    {
        scanf("%s", &input);
        L = strlen(input);
        if(L > 10)
           printf("%c%d%c\n",input[0],L-2,input[L-1]);
        else
            printf("%s\n",input);
        N--;
    }
    return 0;
}
