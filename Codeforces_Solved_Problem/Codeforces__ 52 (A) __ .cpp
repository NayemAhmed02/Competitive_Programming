#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    char str[110];

    while(scanf("%d", &testcase) != EOF)
    {
        while(testcase--)
        {
            scanf("%s", &str);
            int i=0;
            int UP=0,lo=0,digit=0;
            while(str[i])
            {
                if(str[i] >= 'A' && str[i] <= 'Z') UP++;
                else if(str[i] >= 'a' && str[i] <= 'z') lo++;
                else if(str[i] >= '0' && str[i] <= '9') digit++;
                i++;
            }
            if(UP > 0 && lo > 0 && digit > 0)
                printf("%s\n",str);
            else if(UP > 0 && lo > 0 && digit == 0)
            {
                int con1 = 0,con2 = 0;
                for(int j=0; str[j]; j++)
                {
                    if(str[j] >= 'A' && str[j] <= 'Z') con1++;
                    else if(str[j] >= 'a' && str[j] <= 'z') con2++;


                    if(con1 > 1)
                    {
                        str[j] = '7';
                        break;
                    }
                    else if(con2 > 1)
                    {
                        str[j] = '7';
                        break;
                    }
                }
                printf("%s\n",str);
            }
            else if(UP > 0 && lo == 0 && digit > 0)
            {
                int con1=0,con2=0;
                for(int j=0; str[j]; j++)
                {
                    if(str[j] >= 'A' && str[j] <= 'Z') con1++;
                    else if(str[j] >= '0' && str[j] <= '9') con2++;


                    if(con1 > 1)
                    {
                        str[j] = 'a';
                        break;
                    }
                    else if(con2 > 1)
                    {
                        str[j] = 'a';
                        break;
                    }
                }
                printf("%s\n",str);
            }
            else if(UP == 0 && lo > 0 && digit > 0)
            {
                int con1=0,con2=0;
                for(int j=0; str[j]; j++)
                {
                    if(str[j] >= '0' && str[j] <= '9') con1++;
                    else if(str[j] >= 'a' && str[j] <= 'z') con2++;


                    if(con1 > 1)
                    {
                        str[j] = 'A';
                        break;
                    }
                    else if(con2 > 1)
                    {
                        str[j] = 'A';
                        break;
                    }
                }
                printf("%s\n",str);
            }
            else
            {
                if(UP > 0)
                {
                    str[1] = 'a';
                    str[2] = '7';
                }
                else if(lo > 0)
                {
                    str[1] = 'A';
                    str[2] = '7';
                }
                else if(digit > 0)
                {
                    str[1] = 'a';
                    str[2] = 'A';
                }
                printf("%s\n");
            }

        }
    }
    return 0;
}

