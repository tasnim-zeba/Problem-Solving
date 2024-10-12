#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r,s,ans1,ans2,ans3,ans4;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        vector<ll>v1,v2,z1,z2,p1,p2,m1,m2;
        for(i=2;i<=n-1;i++)
        {
            ll x,y;
            if(s>a[i])
            {
                x=a[i];
                y=0;
            }
            else{
                x=a[i]-s;
                y=a[i]-x;
            }
            v1.push_back(min(x,y));
            v2.push_back(max(x,y));
            z2.push_back(min(x,y));
            z1.push_back(max(x,y));
        }
        for(i=2;i<=n-1;i++)
        {
            ll x,y;
            x=a[i]/2;
            y=a[i]-x;
            p1.push_back(min(x,y));
            p2.push_back(max(x,y));
             m2.push_back(min(x,y));
            m1.push_back(max(x,y));
        }
        ll sz=v2.size();
        ans1=v1[0]*a[1]+v2[sz-1]*a[n];
        for(i=0;i<v1.size()-1;i++)
        {
            ///cout<<v1[i]<<" ";
            ans1=ans1+(v2[i]*v1[i+1]);
        }
        sz=z2.size();
        ans2=z1[0]*a[1]+z2[sz-1]*a[n];
        for(i=0;i<z1.size()-1;i++)
        {
            ans2=ans2+(z2[i]*z1[i+1]);
        }
        sz=p2.size();
        ans3=p1[0]*a[1]+p2[sz-1]*a[n];
        for(i=0;i<p1.size()-1;i++)
        {
            ans3=ans3+(p2[i]*p1[i+1]);
        }
        sz=m2.size();
        ans4=m1[0]*a[1]+m2[sz-1]*a[n];
        for(i=0;i<m1.size()-1;i++)
        {
            ans4=ans4+(m2[i]*m1[i+1]);
        }
        for(i=0;i<m1.size();i++)
        {
            cout<<m1[i]<<" ";
        }
        ///cout<<ans1<<endl;
        ///cout<<ans2<<endl;
        cout<<min(min(ans1,ans2),min(ans3,ans4))<<endl;
    }
}
