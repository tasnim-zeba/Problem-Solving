#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,ans,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],b[n+1];
        vector<pair<int,int>>odd,even;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            odd.push_back({a[i],i});
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            even.push_back({b[i],i});
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int h[n+1];
        mn=INT_MAX;
        for(i=even.size()-1;i>=0;i--)
        {
            mn=min(mn,even[i].second);
            h[i]=mn;
        }
        int ans=INT_MAX;
        for(i=0;i<n;i++)
        {
            ans=min(ans,odd[i].second+h[i]);
        }
        cout<<ans<<endl;
    }
}
