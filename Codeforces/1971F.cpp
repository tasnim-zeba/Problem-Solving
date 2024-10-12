#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int point(ll r)
{
    ll p =0;
    for(ll x=0; x<r; x++)
    {
        ll low = 0, high = r, mx;
        while(low<=high)
        {
            ll y = low + (high-low)/2;
            if((x*x+y*y)<r*r)
            {
                mx = y;
                low = y + 1;
            }
            else
            {
                high  = y-1;
            }
        }
        if(x==0)
        {
            p=p+(2*mx+1);
        }
        else
        {
            p=p+(2*mx+1)*2;
        }
    }
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r;
        cin>>r;
        cout<<point(r+1)-point(r)<<endl;
    }
}
