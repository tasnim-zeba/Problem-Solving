#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int func(string s)
{
    int c=0,c1=0,i,x=10,y=10,r,r1;
    r=r1=5;
    for(i=0; i<10; i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1')
            {
                c++;
                r--;
            }
            else
            {
                r--;
            }

        }
        else
        {
            if(s[i]=='1')
            {
                c1++;
                r1--;
            }
            else
            {
                r1--;
            }
        }
        if((c1+r1)<c)
        {
            return i+1;
        }
        else if((c+r)<c1)
        {
            return i+1;
        }
    }
    return 10;
}
int main()
{
    int t,i,c,m1,m2;
    cin>>t;
    string s,s1,s2;
    while(t--)
    {
        cin>>s;
        s1=s;
        s2=s;
        for(i=0; i<10; i++)
        {
            if(s1[i]=='?')
            {
                if(i%2==0)
                {
                    s1[i]='1';
                }
                else
                {
                    s1[i]='0';
                }
            }
        }
        for(i=0; i<10; i++)
        {
            if(s2[i]=='?')
            {
                if(i%2!=0)
                {
                    s2[i]='1';
                }
                else
                {
                    s2[i]='0';
                }
            }
        }
        m1=func(s1);
        m2=func(s2);
        cout<<min(m1,m2)<<endl;
    }
    return 0;
}
