
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll e,x,k,c,r,nx;
    cin>>e;
    while(e--)
    {
        cin>>x>>k;
        k--;
        while(k--)
        {
        nx=x;
        ll mn=9,mx=0;
            while(nx)
            {
                r=nx%10;
            mn=min(mn,r);
            mx=max(mx,r);
            nx=nx/10;
            }
            x=x+mn*mx;
            if(mn==0)
            {
            break;
            }
        }
        cout<<x<<endl;
    }
}
