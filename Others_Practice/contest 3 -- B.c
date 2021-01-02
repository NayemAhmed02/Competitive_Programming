#include<stdio.h>

int main()
{
    int T,N;
    long long int R;
    scanf("%d", &T);
    while(T)
    {
        scanf("%d", &N);
        R = (N*(N-1)) / 2;
        printf("%lld\n",R);
        T--;
    }
    return 0;
}
