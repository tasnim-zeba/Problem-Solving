#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,l,r,c,i,j,mn,mx,x,y,ans,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mn=INT_MAX;
        mx=INT_MIN;
        x=y=INT_MAX;
        ans=INT_MAX;
        int f=0;
        while(n--)
        {
            cin>>l>>r>>c;
            if(l<mn)
            {
                mn=l;
                x=c;
                s=INT_MAX;
            }
            else if(l==mn)
            {
                 x=min(c,x);
            }
            if(r>mx)
            {
                mx=r;
                y=c;
                s=INT_MAX;
            }
            else if(r==mx)
            {
                 y=min(c,y);
            }
            if(l==mn&&r==mx)
            {
                s=min(s,c);
            }
            ans=min(s,x+y);
            cout<<ans<<endl;
        }
    }
}
