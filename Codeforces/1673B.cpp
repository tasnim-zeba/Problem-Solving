
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
        vector<vector<ll> >v(26);
        for(i=0;i<n;i++)
        {
            v[s[i]-'a'].push_back(i);
        }
        f=1;
        for(i=0;i<v.size();i++)
        {
            if(v[i].size()>1)
            {
                c2=0;
                for(j=0;j<(v[i].size()-1);j++)
                {
                    if((v[i][j+1]-v[i][j])<c)
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(f==0)
            {
                break;
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
