#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[20];

    while(cin>>str)
    {
        long long int num = 0,num2=0;
        int result = 0,i;
        for(i=0; str[i]; i++)
            num = (num*10) + (str[i]-48);
        //cout<<num<<"\n";

        if(str[0] > 49)
        {
            int first = str[0] - 48;
            int mid = first/2;
            result = mid + (9*(i-1));

            //cout<<result<<"\n";

            num2 = mid;
            int j = 1;
            while(j<i)
            {
                num2 = (num2*10) + 9;
                j++;
            }
            num2 = num - num2;

            //cout<<num2<<"\n";

            while(num2 > 0)
            {
                int re = num2 % 10;
                result += re;
                num2 /= 10;
            }
        }
        else
        {
            int first = str[0] - 48;
            if(i > 1)
            {
                first *= 10;
                first = first + ((str[1]) - 48);
            }
            int mid = first/2;
            if(i >1) result = mid + (9*(i-2));

            num2 = mid;
            int j = 2;
            while(j<i)
            {
                num2 = (num2*10) + 9;
                j++;
            }
            num2 = num - num2;

            while(num2 > 0)
            {
                int re = num2 % 10;
                result += re;
                num2 /= 10;
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
