#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    char str[n],str2[n];
    cin>>str>>str2;

    int q = 0;
    int nu[26],nu2[26];

    for(int j=0; j<26; j++)
    {
        nu[j] = 0;
        nu2[j] = 0;
    }

    for(int i=0; i<n; i++)
    {
        if(str[i] == '?') q++;
        else if(str[i] == 'a') nu[0]++;
        else if(str[i] == 'b') nu[1]++;
        else if(str[i] == 'c') nu[2]++;
        else if(str[i] == 'd') nu[3]++;
        else if(str[i] == 'e') nu[4]++;
        else if(str[i] == 'f') nu[5]++;
        else if(str[i] == 'g') nu[6]++;
        else if(str[i] == 'h') nu[7]++;
        else if(str[i] == 'i') nu[8]++;
        else if(str[i] == 'j') nu[9]++;
        else if(str[i] == 'k') nu[10]++;
        else if(str[i] == 'l') nu[11]++;
        else if(str[i] == 'm') nu[12]++;
        else if(str[i] == 'n') nu[13]++;
        else if(str[i] == 'o') nu[14]++;
        else if(str[i] == 'p') nu[15]++;
        else if(str[i] == 'q') nu[16]++;
        else if(str[i] == 'r') nu[17]++;
        else if(str[i] == 's') nu[18]++;
        else if(str[i] == 't') nu[19]++;
        else if(str[i] == 'u') nu[20]++;
        else if(str[i] == 'v') nu[21]++;
        else if(str[i] == 'w') nu[22]++;
        else if(str[i] == 'x') nu[23]++;
        else if(str[i] == 'y') nu[24]++;
        else if(str[i] == 'z') nu[25]++;

        if(str2[i] == '?') q++;
        else if(str2[i] == 'a') nu2[0]++;
        else if(str2[i] == 'b') nu2[1]++;
        else if(str2[i] == 'c') nu2[2]++;
        else if(str2[i] == 'd') nu2[3]++;
        else if(str2[i] == 'e') nu2[4]++;
        else if(str2[i] == 'f') nu2[5]++;
        else if(str2[i] == 'g') nu2[6]++;
        else if(str2[i] == 'h') nu2[7]++;
        else if(str2[i] == 'i') nu2[8]++;
        else if(str2[i] == 'j') nu2[9]++;
        else if(str2[i] == 'k') nu2[10]++;
        else if(str2[i] == 'l') nu2[11]++;
        else if(str2[i] == 'm') nu2[12]++;
        else if(str2[i] == 'n') nu2[13]++;
        else if(str2[i] == 'o') nu2[14]++;
        else if(str2[i] == 'p') nu2[15]++;
        else if(str2[i] == 'q') nu2[16]++;
        else if(str2[i] == 'r') nu2[17]++;
        else if(str2[i] == 's') nu2[18]++;
        else if(str2[i] == 't') nu2[19]++;
        else if(str2[i] == 'u') nu2[20]++;
        else if(str2[i] == 'v') nu2[21]++;
        else if(str2[i] == 'w') nu2[22]++;
        else if(str2[i] == 'x') nu2[23]++;
        else if(str2[i] == 'y') nu2[24]++;
        else if(str2[i] == 'z') nu2[25]++;

    }

    int p = 0;

    for(int j=0; j<26; j++)
    {
        int a = min(nu[j], nu2[j]);
        p += a;
    }

    if((p+q) > n)
        cout<<n<<"\n";
    else
        cout<<p+q<<"\n";

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((str[i] == str2[j]) && str[i] != '?')
            {
                cout<<i+1<<" "<<j+1<<"\n";
                str[i] = '9';
                str2[j] = '9';
                break;
            }
        }
    }
}
