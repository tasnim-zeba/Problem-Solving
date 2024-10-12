#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>even, odd;
        for(ll i=1, x; i<=n; i++)
        {
            cin>>x;
            if(x%2){
                odd.push_back(x);
            }
            else{
                even.push_back(x);
            }
        }
        if(odd.size()==0 || even.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        ll omx= odd[odd.size()-1];
        ll ans = 0;
        int j=-1;
        for(int i=even.size()-1; i>=0; i--)
        {
            if(even[i]<omx){
                j=i;
                break;
            }
        }
        for(int i=j; i>=0; i--)
        {
            ans++;
            omx+=even[i];
        }
        ll ans1 = ans;
        for(int i=j+1; i<even.size(); i++)
        {
            if(i==(even.size()-1))
            {
                if(even[even.size()-1]>omx)
                {
                    ans++;
                }
            }
            ans++;
        }
        for(int i=j+1; i<even.size(); i++)
        {
            if(even[i]<omx)
            {
                   omx+=even[i];
                   ans1++;
            }
            else{
                ans1+=2;
            }
        }
        cout<<min(ans, ans1)<<endl;
    }
}

