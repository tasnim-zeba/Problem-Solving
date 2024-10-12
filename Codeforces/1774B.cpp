#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,k,i,j,mx,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        mx=n/k;
        ll x;
         p=q=0;
        for(i=1; i<=m; i++)
        {
            cin>>x;
            if(x>mx)
            {
                p=max(p,x-mx);
                q=q+(x-mx);
            }
        }
        if((p>1)||(q>(n%k)))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
