#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll e,i,j,c,k,x;
    cin>>e;
    while(e--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        c=1;
        if(s.size()>t.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        x=0;
        for(i=0;i<s.size();i++)
        {
            int f=0;
            for(j=x;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    x=j+1;
                    t[j]='*';
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                c=0;
                break;
            }
        }
        ///cout<<t<<endl;
        if(c)
        {
            for(i=0;i<t.size();i++)
            {
                if(t[i]=='*')continue;
                int f=0;
                for(j=0;j<p.size();j++)
                {
                    if(t[i]==p[j])
                    {
                        p[j]='*';
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                c=0;
                break;
                }
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
