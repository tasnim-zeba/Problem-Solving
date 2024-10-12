#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int left(string s,string t,int i,int x)
{
    while(i>=0&&x<t.size())
    {
        if(s[i]==t[x])
        {
            i--;
            x++;
        }
        else{
            break;
        }
    }
    if(x==t.size())
    {
        return 1;
    }
    return 0;
}
int right(string s,string t,int i,int x)
{
    if(x==t.size())
    {
        return 1;
    }
    if((x+1)==t.size())
    {
        if((i+1)<s.size()&&s[i+1]==t[x])
        {
            return 1;
        }
        else if((i-1)>=0&&s[i-1]==t[x])
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    int r1=0,r2=0;
    while((i-1)>=0&&s[i-1]==t[x])
    {
        r1=left(s,t,i-1,x);
    }
    if(r1)
    {
        return 1;
    }
    while((i+1)<s.size()&&s[i+1]==t[x])
    {
        r2=right(s,t,i+1,x+1);
    }
    return (r1||r2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q,i,j,f;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s;
        cin>>t;
        f=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==t[0])
            {
                f=right(s,t,i,1);
                if(f)
                {
                    break;
                }
            }
        }
        if(f)
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
