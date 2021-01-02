#include<bits/stdc++.h>
using namespace std;

int main()
{
    int V1,V2,V3,Vm;

    while(scanf("%d %d %d %d", &V1, &V2, &V3, &Vm) != EOF)
    {
        if(Vm > (2*V3))
            printf("-1\n");
        else if(Vm > 49) printf("-1\n");
        else if(V3 > 49) printf("-1\n");
        else if(Vm > V3 && V2 > (2*Vm))
            printf("%d\n%d\n%d\n",V1,V2,Vm);
        else if(Vm > V3 && V2 <= (2*Vm))
            printf("%d\n%d\n%d\n",(2*Vm)+2,(2*Vm)+1,Vm);

        else if(V2 > (2*V3)) printf("%d\n%d\n%d\n",V1,V2,V3);
        else if(V2 <= (2*V3)) printf("%d\n%d\n%d\n",(2*V3)+2,(2*V3)+1,V3);

    }
return 0;
}
