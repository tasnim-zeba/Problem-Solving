#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]--;
        }
        vector<ll>used(n+1,0);
        vector<ll>ans(n+1);
        for(i=0;i<n;i++)
        {
            if(!used[i])
            {
                vector<ll>cur;
                while(!used[i])
                {
                    used[i]=1;
                    cur.push_back(i);
                    i=a[i];
                }
                for(j=0;j<cur.size();j++)
                {
                    ans[cur[j]]=cur.size();
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
