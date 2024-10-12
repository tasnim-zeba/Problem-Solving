#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, c;
        cin>>n>>c;
        ll a[n+1], pr[n+3], suf[n+3], pre[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        pr[0]=INT_MIN;
        suf[n+1]=INT_MIN;
        pre[0]=0;
        for(int i=1; i<=n; i++)
        {
            pr[i] = max(a[i], pr[i-1]);
            pre[i] = a[i] + pre[i-1];
        }
        for(int i=n; i>=1; i--)
        {
            suf[i]=max(a[i], suf[i+1]);
        }
        vector<ll>ans;
        for(int i=1; i<=n; i++)
        {
            if(i==1){
                if((a[i]+c)>=suf[i+1]){
                        ans.push_back(0);
                    }
                    else{
                        ans.push_back(i);
                    }
            }
            else{
                if(pr[i-1]<a[i] && (a[1]+c)<a[i])
                {
                    if(a[i]>=suf[i+1]){
                        ans.push_back(0);
                    }
                    else if((a[i]+c+pre[i-1])>=suf[i+1])
                    {
                        ans.push_back(i-1);
                    }
                    else{
                        ans.push_back(i);
                    }
                }
                else{
                    if((a[i]+c+pre[i-1])>=suf[i+1])
                    {
                        ans.push_back(i-1);
                    }
                    else{
                        ans.push_back(i);
                    }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

