#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,mn,mx;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mx=max(m,n);
        mn=min(m,n);
        int ans=0;
        ans=ans+(mx/3)*mn;
        ans=ans+(mx%3)*(mn/3);
        if((mx%3)==0||(mn%3)==0);
        else if((mx%3)==1&&(mn%3)==1)
        {
            ans++;
        }
        else if((mx%3)==2&&(mn%3)==2)
        {
            ans+=2;
        }
        else
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
