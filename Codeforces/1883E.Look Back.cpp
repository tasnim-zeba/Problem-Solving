#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ll ans=0, curr=0;
        for(int i=2; i<=n; i++)
        {
            ll ele = a[i];
            while(curr>0 && ele>= 2* a[i-1])
            {
                curr--;
                ele = ele/2;
            }
            while(ele<a[i-1])
            {
                curr++;
                ele=ele*2;
            }
            ans = ans + curr;
        }
        cout<<ans<<endl;
    }
}
