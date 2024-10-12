#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    ///fio
    ll t,n,k,i,j,r,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],p1[n+1],p2[n+1],vp1[n+1],vp2[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            vp1[i]=vp2[i]=0;
            p1[i]=p2[i]=0;
        }

        f=1;
        for(i=1;i<=n;i++)
        {
            if(vp1[a[i]]==0)
            {
                p1[i]=a[i];
                vp1[a[i]]=1;
            }
            else if(vp2[a[i]]==0)
            {
                p2[i]=a[i];
                vp2[a[i]]=1;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll>x;
        vector<pair<ll,ll>>y;
        for(i=1;i<=n;i++)
        {
            if(vp1[i]==0)
            {
                x.push_back(i);
            }
            if(p1[i]==0)
            {
                y.push_back({p2[i],i});
            }
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        for(i=0;i<y.size();i++)
        {
            p1[y[i].second]=x[i];
        }
        vector<ll>x1;
        vector<pair<ll,ll>>y1;
        for(i=1;i<=n;i++)
        {
            if(vp2[i]==0)
            {
                x1.push_back(i);
            }
            if(p2[i]==0)
            {
                y1.push_back({p1[i],i});
            }
        }
        sort(x1.begin(),x1.end());
        sort(y1.begin(),y1.end());
        for(i=0;i<y1.size();i++)
        {
            p2[y1[i].second]=x1[i];
        }
        /*for(i=1;i<=n;i++)
        {
            cout<<p1[i]<<" ";
        }
        cout<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<p2[i]<<" ";
        }*/
        f=1;
        for(i=1;i<=n;i++)
        {
            if((max(p1[i],p2[i])!=a[i])||(p1[i]==0)||(p2[i]==0))
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n;i++)
        {
            cout<<p1[i]<<" ";
        }
        cout<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<p2[i]<<" ";
        }
        cout<<endl;
        }
    }
}
