#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a,b,pr,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int mx=INT_MIN;
        vector<int>v;
        for(i=1;i<=n;i++)
        {
            cin>>a>>b;
            v.push_back(a-b);
            mx=max(mx,a-b);
        }
        if(mx<=0)
        {
            cout<<0<<endl;
        }
        else
        {
            int ans=0;
            for(i=0;i<v.size();i++)
            {
                if(v[i]<=mx&&v[i]>0)
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
}
