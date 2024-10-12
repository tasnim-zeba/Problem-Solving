#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n==4&&k==n-1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(k==n-1)
        {
            cout<<k<<" "<<k-1<<endl;
            cout<<1<<" "<<3<<endl;
            for(i=2,j=n-3; i<(n/2); i++,j--)
            {
                if(i==3)cout<<j<<" "<<0<<endl;
                else
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
            continue;
        }
        cout<<k<<" "<<n-1<<endl;
        for(i=1,j=n-2; i<(n/2); i++,j--)
        {
            if(i==k)cout<<j<<" "<<0<<endl;
            else if(j==k)cout<<i<<" "<<0<<endl;
            else
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
