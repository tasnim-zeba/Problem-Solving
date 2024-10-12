#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string func(string s,ll x,ll n)
{
    string s1="";
    ll i;
    for(i=x;i>=0;i--)
    {
        if(s[i]=='0')s1+='1';
        else s1+='0';
    }
    for(i=x+1;i<n;i++)
    {
        s1+=s[i];
    }
    return s1;
}
int main()
{
    ll t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        cin>>a>>b;
        ///a=func(a,x,n);
        vector<ll>v;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==b[i]);
            else
            {
                if(b[i]!=a[0])
                {
                    v.push_back(i+1);
                    a=func(a,i,n);
                }
                else
                {
                    v.push_back(1);
                    if(a[0]=='0')a[0]='1';
                    else a[0]='0';
                    v.push_back(i+1);
                    a=func(a,i,n);
                }
            }
        }
        ///cout<<a<<endl;
        cout<<v.size()<<" ";
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
