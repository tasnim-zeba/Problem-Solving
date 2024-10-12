#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,m,l,r,i,j,c,mn,mx;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        mn=mx=x;
        c=0;
        while(m--)
        {
            cin>>l>>r;
            if(mn>l&&mn<=r)
            {
                mn=l;
            }
            if(mx<r&&mx>=l)
            {
                mx=r;
            }
        }
        ///cout<<c<<endl;
        cout<<(mx-mn+1)<<endl;
    }
    return 0;
}
