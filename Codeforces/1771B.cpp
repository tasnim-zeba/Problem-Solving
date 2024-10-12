#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,i,j,m,x,y,ans,last;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<ll>prev(n+1,0);
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            if(x>y)swap(x,y);
            prev[y]=max(prev[y],x);
        }
        ans=last=0;
        for(i=1;i<=n;i++)
        {
            last=max(last,prev[i]);
            ans=ans+(i-last);
        }
        cout<<ans<<endl;
    }
}


