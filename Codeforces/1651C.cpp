#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ans1,ans2,x,y,x1,y1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        set<ll>as,bs;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            as.insert(a[i]);
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            bs.insert(b[i]);
        }
        ans1=ans2=INT_MAX;
        auto it=bs.upper_bound(a[n-1]);
        if(it==bs.end())
        {
            it--;
            x=abs(a[n-1]-(*it));
        }
        else
        {
            x=abs(a[n-1]-(*it));
            if(it==bs.begin());
            else
            {
                it--;
                x=min(x,abs(a[n-1]-(*it)));
            }
        }
        it=as.upper_bound(b[n-1]);
        if(it==as.end())
        {
            it--;
            y=abs(b[n-1]-(*it));
        }
        else
        {
            y=abs(b[n-1]-(*it));
            if(it==as.begin());
            else
            {
                it--;
                y=min(y,abs(b[n-1]-(*it)));
            }
        }
        ans1=x+y;
        ans1=min(abs(a[n-1]-b[n-1]),ans1);



        it=bs.upper_bound(a[0]);
        if(it==bs.end())
        {
            it--;
            x1=abs(a[0]-(*it));
        }
        else
        {
            x1=abs(a[0]-(*it));
            if(it==bs.begin());
            else
            {
                it--;
                x1=min(x1,abs(a[0]-(*it)));
            }
        }
        it=as.upper_bound(b[0]);
        if(it==as.end())
        {
            it--;
            y1=abs(b[0]-(*it));
        }
        else
        {
            y1=abs(b[0]-(*it));
            if(it==as.begin());
            else
            {
                it--;
                y1=min(y1,abs(b[0]-(*it)));
            }
        }
        ans2=x1+y1;
        ans2=min(abs(a[0]-b[0]),ans2);
        ll ans3=min(y+x1,abs(a[0]-b[n-1]))+min(x+y1,abs(a[n-1]-b[0]));
        cout<<min(ans1+ans2,ans3)<<endl;
    }
}
