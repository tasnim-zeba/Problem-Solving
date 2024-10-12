#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int k;
inline bool cmp(int i, int j) {
	if ((i % k) == (j % k)) return i < j;
	return (i % k) < (j % k);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>k;
        int a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n, cmp);
        for(int i=0; i<n; i++)
        {
            //cout<<a[i]<<" ";
        }
        //cout<<endl;
        if(n%2==0)
        {
            ll ans = 0LL;
            for(int i=0; i<n-1; i++)
            {
                if((a[i+1]-a[i])%k==0)
                {
                    ans = ans+(a[i+1]-a[i])/k;
                    i++;
                }
                else
                {
                    ans = -1;
                    break;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            if(n==1)
            {
                cout<<0<<endl;
                continue;
            }
            vector<ll>pre(n+1, 0), suf(n+1, 0);
            if((a[1]-a[0])%k==0)
            {
                pre[1] = (a[1]-a[0])/k;
            }
            else{
                pre[1] = -1;
            }
            for(int i=3; i<n; i=i+2)
            {
                if(pre[i-2]==-1){
                    pre[i] = -1;
                }
                else if((a[i]-a[i-1])%k==0)
                {
                    pre[i] = pre[i-2] + (a[i]-a[i-1])/k;
                }
                else{
                    pre[i] = -1;
                }
            }
            if((a[n-1]-a[n-2])%k==0)
            {
                suf[n-2] = (a[n-1]-a[n-2])/k;
            }
            else{
                suf[n-2] = -1;
            }
            for(int i=n-4; i>=0; i=i-2)
            {
                if(suf[i+2]==-1){
                    suf[i] = -1;
                }
                else if((a[i+1]-a[i])%k==0)
                {
                    suf[i] = suf[i+2] + (a[i+1]-a[i])/k;
                }
                else{
                    suf[i] = -1;
                }
            }
            ll ans = INT_MAX;
            for(int i=0; i<n; i=i+2){
                ll x1,x2;
                if(i==0)
                {
                    if(suf[1]!=-1){
                        ans=min(ans, suf[1]);
                    }
                    continue;
                }
                if(i==n-1)
                {
                    if(pre[n-2]!=-1){
                        ans=min(ans, pre[n-2]);
                    }
                    continue;
                }
                if(pre[i-1]!=-1 && suf[i+1]!=-1){
                    ans = min(ans, suf[i+1]+pre[i-1]);
                }
               // cout<<ans<<endl;
            }
            if(ans == INT_MAX){
                cout<<-1<<endl;
            }
            else{
                cout<<ans<<endl;
            }

        }
    }
}
