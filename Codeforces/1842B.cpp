#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,i,j,x,ia,ib,ic;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll a[n+1],b[n+1],c[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }
        vector<ll>v;
        for(i=0; i<=30; i++)
        {
            if(x&(1<<i));
            else
            {
                v.push_back(i);
            }
        }
        ia=n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=30;j++)
            {
                if(a[i]&(1<<j))
                {
                    auto it=find(v.begin(),v.end(),j);
                    if(it!=v.end())
                    {
                        ia=i;
                        break;
                    }
                }
            }
            if(ia!=n)break;
        }
        ib=n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=30;j++)
            {
                if(b[i]&(1<<j))
                {
                    auto it=find(v.begin(),v.end(),j);
                    if(it!=v.end())
                    {
                        ib=i;
                        break;
                    }
                }
            }
            if(ib!=n)break;
        }
        ic=n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=30;j++)
            {
                if(c[i]&(1<<j))
                {
                    auto it=find(v.begin(),v.end(),j);
                    if(it!=v.end())
                    {
                        ic=i;
                        break;
                    }
                }
            }
            if(ic!=n)break;
        }
        ll y=0;
        for(i=0;i<ia;i++)
        {
            y|=a[i];
        }
        for(i=0;i<ib;i++)
        {
            y|=b[i];
        }
        for(i=0;i<ic;i++)
        {
            y|=c[i];
        }
        if(y==x)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }


    }
}

