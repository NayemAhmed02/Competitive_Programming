#include<bits/stdc++.h>
using namespace std;

#define SIZE 110

int main()
{
    char str[SIZE],ans[SIZE];
    int num;

    while(scanf("%d", &num) != EOF)
    {
        getchar();
        gets(str);
        int j=0;
        for(int i=0; i<num; i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
            {
                ans[j] = str[i];
                j++;
                while(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
                    i++;
            }
            ans[j] = str[i];
            j++;

        }
        ans[j] = '\0';
        printf("%s\n",ans);
    }
    return 0;
}
