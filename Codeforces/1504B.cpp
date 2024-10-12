#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c0,c1,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        vector<pair<ll,ll> >v;
        vector<pair<ll,ll> >:: iterator it;
        j=0;
        c0=c1=0;
        for(i=0; i<n; i++)
        {
            if(a[i]=='1')
            {
                c1++;
            }
            else
            {
                c0++;
            }
            if(c0==c1)
            {
                v.push_back({j,i});
                j=i+1;
            }

        }

        for(it=v.begin(); it!=v.end(); it++)
        {
            ///cout<<it->first<<" "<<it->second<<endl;
            l=it->first;
            r=it->second;
            if(a[l]==b[l])continue;
            else
            {
                for(i=l;i<=r;i++)
                {
                    if(a[i]=='0')
                    {
                        a[i]='1';
                    }
                    else
                    {
                        a[i]='0';
                    }
                }
            }
        }
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
