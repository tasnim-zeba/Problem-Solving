#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,n,i,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=a;
        y=b;
        n=a+b;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(a<=0)
                    {
                        break;
                    }
                a--;
                if(s[n-i-1]=='?')
                {
                    s[n-i-1]='0';
                }
                else if(s[n-i-1]=='1')
                {
                    c=1;
                    break;
                }
            }
            else if(s[i]=='1')
            {
                if(b<=0)
                    {
                        c=1;
                        break;
                    }
                b--;
                if(s[n-i-1]=='?')
                {
                    s[n-i-1]='1';
                }
                else if(s[n-i-1]=='0')
                {
                    c=1;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(a>1)
                {
                    s[i]='0';
                    s[n-i-1]='0';
                    a=a-2;
                }
                else if(b>1)
                {
                    s[i]='1';
                    s[n-i-1]='1';
                    b=b-2;
                }
            }
        }
        string s1=s;
        reverse(s1.begin(),s1.end());

        if(s==s1)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
