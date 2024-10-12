#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ans,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        map<pair<pair<ll,ll>,pair<ll,ll>>,ll>mp;
        ans=0;
        x1=y1=x2=y2=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='E')
            {
                x2++;
                if(mp[{{x1,y1},{x2,y2}}]||mp[{{x2,y2},{x1,y1}}])
                {
                    ans++;
                }
                else
                {
                    mp[{{x1,y1},{x2,y2}}]=1;
                    ans=ans+5;
                }
                x1=x2;
                y1=y2;
            }
            else if(s[i]=='W')
            {
                x2--;
                if(mp[{{x1,y1},{x2,y2}}]||mp[{{x2,y2},{x1,y1}}])
                {
                    ans++;
                }
                else
                {
                    mp[{{x1,y1},{x2,y2}}]=1;
                    ans=ans+5;
                }
                x1=x2;
                y1=y2;
            }
            else if(s[i]=='N')
            {
                y2--;
                if(mp[{{x1,y1},{x2,y2}}]||mp[{{x2,y2},{x1,y1}}])
                {
                    ans++;
                }
                else
                {
                    mp[{{x1,y1},{x2,y2}}]=1;
                    ans=ans+5;
                }
                x1=x2;
                y1=y2;
            }
            else if(s[i]=='S')
            {
                y2++;
                if(mp[{{x1,y1},{x2,y2}}]||mp[{{x2,y2},{x1,y1}}])
                {
                    ans++;
                }
                else
                {
                    mp[{{x1,y1},{x2,y2}}]=1;
                    ans=ans+5;
                }
                x1=x2;
                y1=y2;
            }
        }
        cout<<ans<<endl;
    }
}
