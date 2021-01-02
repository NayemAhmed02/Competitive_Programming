#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int A,B,C;
    while(cin>>A>>B>>C)
    {
        int MIN = min(min(A/3, B/2), C/2);

        int total_days = 0;
        total_days = MIN * 7;
        //cout<<total_days<<"\n";
        A -= (MIN * 3);
        B -= (MIN * 2);
        C -= (MIN * 2);

        int a,b,c;

        int rem[7];

        for(int i=0; i<7; i++)
        {
            a = A,b = B,c = C;
            if(i == 0)
            {
                rem[i] = 0;
                if(b > 0)
                {
                    rem[i]++;
                    b--;
                    if(a > 0)
                    {
                        rem[i]++;
                        a--;
                        if(a > 0)
                        {
                            rem[i]++;
                            a--;
                            if(b > 0)
                            {
                                rem[i]++;
                                b--;
                                if(c > 0)
                                {
                                    rem[i]++;
                                    c--;
                                    if(a > 0)
                                    {
                                        rem[i]++;
                                        a--;
                                        if(c > 0)
                                        {
                                            rem[i]++;
                                            c--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
            if(i == 1)
            {
                rem[i] = 0;

                if(a > 0)
                {
                    rem[i]++;
                    a--;
                    if(a > 0)
                    {
                        rem[i]++;
                        a--;
                        if(b > 0)
                        {
                            rem[i]++;
                            b--;
                            if(c > 0)
                            {
                                rem[i]++;
                                c--;
                                if(a > 0)
                                {
                                    rem[i]++;
                                    a--;
                                    if(c > 0)
                                    {
                                        rem[i]++;
                                        c--;
                                        if(b > 0)
                                        {
                                            rem[i]++;
                                            b--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
            if(i == 2)
            {
                rem[i] = 0;
                if(a > 0)
                {
                    rem[i]++;
                    a--;
                    if(b > 0)
                    {
                        rem[i]++;
                        b--;
                        if(c > 0)
                        {
                            rem[i]++;
                            c--;
                            if(a > 0)
                            {
                                rem[i]++;
                                a--;
                                if(c > 0)
                                {
                                    rem[i]++;
                                    c--;
                                    if(b > 0)
                                    {
                                        rem[i]++;
                                        b--;
                                        if(a > 0)
                                        {
                                            rem[i]++;
                                            a--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if(i == 3)
            {
                rem[i] = 0;
                if(b > 0)
                {
                    rem[i]++;
                    b--;
                    if(c > 0)
                    {
                        rem[i]++;
                        c--;
                        if(a > 0)
                        {
                            rem[i]++;
                            a--;
                            if(c > 0)
                            {
                                rem[i]++;
                                c--;
                                if(b > 0)
                                {
                                    rem[i]++;
                                    b--;
                                    if(a > 0)
                                    {
                                        rem[i]++;
                                        a--;
                                        if(a > 0)
                                        {
                                            rem[i]++;
                                            a--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
            if(i == 4)
            {
                rem[i] = 0;
                if(c > 0)
                {
                    rem[i]++;
                    c--;
                    if(a > 0)
                    {
                        rem[i]++;
                        a--;
                        if(c > 0)
                        {
                            rem[i]++;
                            c--;
                            if(b > 0)
                            {
                                rem[i]++;
                                b--;
                                if(a > 0)
                                {
                                    rem[i]++;
                                    a--;
                                    if(a > 0)
                                    {
                                        rem[i]++;
                                        a--;
                                        if(b > 0)
                                        {
                                            rem[i]++;
                                            b--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
            if(i == 5)
            {
                rem[i] = 0;
                if(a > 0)
                {
                    rem[i]++;
                    a--;
                    if(c > 0)
                    {
                        rem[i]++;
                        c--;
                        if(b > 0)
                        {
                            rem[i]++;
                            b--;
                            if(a > 0)
                            {
                                rem[i]++;
                                a--;
                                if(a > 0)
                                {
                                    rem[i]++;
                                    a--;
                                    if(b > 0)
                                    {
                                        rem[i]++;
                                        b--;
                                        if(c > 0)
                                        {
                                            rem[i]++;
                                            c--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
            if(i == 6)
            {
                rem[i] = 0;
                if(c > 0)
                {
                    rem[i]++;
                    c--;
                    if(b > 0)
                    {
                        rem[i]++;
                        b--;
                        if(a > 0)
                        {
                            rem[i]++;
                            a--;
                            if(a > 0)
                            {
                                rem[i]++;
                                a--;
                                if(b > 0)
                                {
                                    rem[i]++;
                                    b--;
                                    if(c > 0)
                                    {
                                        rem[i]++;
                                        c--;
                                        if(a > 0)
                                        {
                                            rem[i]++;
                                            a--;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }

        }
        sort(rem, rem+7);
        total_days += rem[6];

        cout<<total_days<<"\n";
    }
    return 0;
}
