#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,k,x,i,j,c,x1,x2;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        vector<pair<ll,ll> >f;
        vector<ll>res(m,0);
        ll p[n+1]={0};
        for(i=0;i<n;i++)
        {
        cin>>x;
        f.push_back(make_pair(x,i));
        }
        sort(f.begin(),f.end());
        c=0;
        while(c<n)
        {
            for(i=0;i<m;i++)
            {
                x1=f[c].first;
                x2=f[c].second;
            res[i]=res[i]+x1;
            p[x2]=i+1;
            c++;
            if(c>=n){break;}
            }
        }
        bool b=false;
        for(i=1;i<m;i++)
        {
            ll y=abs(res[i]-res[i-1]);
            if(y>k) {
             b=true;}
        }
        if(b)
        {
        cout<<"NO"<<endl;
        }
        else
        {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}
