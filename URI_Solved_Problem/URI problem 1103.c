#include<stdio.h>

int main()
{
    int H1,M1,H2,M2,R;
    for( ; ; )
    {
        scanf("%d %d %d %d", &H1,&M1,&H2,&M2);
        if(H1==0 && H2==0 && M1==0 && M2==0) break;
        else
        {
            if(H2 > H1) R = ((H2 - H1) * 60) + (M2 - M1);
            else if(H2 < H1) R = (((H2 + 24) - H1) * 60) +(M2 - M1);
            else
            {
                if(M2 >= M1) R = M2 - M1;
                else R = (24 * 60) + (M2 - M1);
            }
            printf("%d\n",R);
        }
    }
    return 0;
}
