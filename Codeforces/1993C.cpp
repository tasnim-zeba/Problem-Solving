#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int f=1;
        ll l=a[n-1],r=a[n-1]+k-1;
        for(int i=n-2; i>=0; i--)
        {
            ll d= (a[n-1]-a[i])/k;
            ll tl, tr;
            if(d%2){
                tl=a[i]+k*d+k;
            }
            else{
                tl = a[i] + k*d;
            }
            tr=tl+k-1;
            l=max(l, tl);
            r=min(r, tr);
        }
        if(l<=r){
            cout<<l<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

