#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    /// fio
    ll t,n,k,i,j,r,o,e;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        o=e=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]%2)o++;
            else e++;
        }
        if(o>=3)
        {
            cout<<"YES"<<endl;
            ll g=0;
            for(i=1; i<=n; i++)
            {
                if(g==3)break;
                if(a[i]%2)
                {
                    cout<<i<<" ";
                    g++;
                }
            }
            cout<<endl;
        }
        else if(o>=1&&e>=2)
        {
            cout<<"YES"<<endl;
            ll g=0,h=0;
            for(i=1; i<=n; i++)
            {
                if(h==2&&g==1)break;
                if(a[i]%2==1&&g==0)
                {
                    cout<<i<<" ";
                    g++;
                }
                else if(a[i]%2==0&&h<2)
                {
                    cout<<i<<" ";
                    h++;
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
