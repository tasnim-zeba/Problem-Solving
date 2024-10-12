#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,x,y, scb, scs,b,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>b>>s;
        ll p[n+1], a[n+1], r[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>p[i];
            r[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        scb = INT_MIN, scs = INT_MIN;
        ll tscb =0, tscs=0;
        for(i=k; i>=1; i--)
        {
            if(r[b]==1)
            {
                break;
            }
            r[b]=1;
            tscb+=a[b];
            //cout<<tscb<<endl;
            scb=max(scb,tscb+(i-1)*a[b]);
            //cout<<scb<<endl;
            //cout<<b<<" "<<k<<" "<<a[b]<<endl;
            b=p[b];
        }
        for(i=1;i<=n;i++)r[i]=0;

        for(i=k; i>=1; i--)
        {
            if(r[s]==1)
            {
                break;
            }
            r[s]=1;
            tscs+=a[s];
            scs=max(scs,tscs+(i-1)*a[s]);
            s=p[s];
        }


       // cout<<scb<<" "<<scs<<endl;
        if(scb>scs)
        {
            cout<<"Bodya"<<endl;
        }
        else if(scb<scs)
        {
            cout<<"Sasha"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
}
