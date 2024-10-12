#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,c1,c2,n,c,f;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        ll a[26]={0};
        c=0;
        for(i=0;i<n;i++)
        {
            a[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]>0)
            {
                c++;
            }
        }
        f=1;
        map<char,ll>mp;
        c1=0;
        for(i=0;i<n;i++)
        {
            if(c1==c)
            {
                c1=0;
                mp.clear();
            }
            if(c1<c)
            {
                if(mp.count(s[i])==0)
                {
                    mp[s[i]]++;
                    c1++;
                }
                else
                {
                    f=0;
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
}
