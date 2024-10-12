#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,i,j,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        vector<ll>va;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            va.push_back(a[i]);
        }
        ll b[n+1];
        vector<ll>vb;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            vb.push_back(b[i]);
        }
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
        vector< pair<ll,ll> >p;
        int c=0,f=1;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=i;j<n;j++)
            {
                if(a[j]==va[i]&&b[j]==vb[i])
                {
                    if(i==j){
                        c=1;
                        break;
                    }
                    p.push_back({i+1,j+1});
                    c=1;
                   swap(a[i],a[j]);
                   swap(b[i],b[j]);
                   break;
                }
            }
            if(c==0)
            {
                cout<<-1<<endl;
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<p.size()<<endl;
            for(i=0;i<p.size();i++)
            {
                cout<<p[i].first<<" "<<p[i].second<<endl;
            }
        }
    }
}
