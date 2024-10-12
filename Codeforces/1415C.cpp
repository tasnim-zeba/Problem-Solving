#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,p,k,x,y,i,j,ans,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>p>>k;
        string s;
        cin>>s;
        cin>>x>>y;
        c=0;
        ans=INT_MAX;
        for(i=n-1;i>n-1-k;i--)
        {
            c=0;
            for(j=i;(j+1)>=(p);j=j-k)
            {
                if(s[j]=='0')
                {
                    c=c+x;
                }
                ans=min(ans,c+(j+1-p)*y);
            }
        }
        cout<<ans<<endl;
    }
}
