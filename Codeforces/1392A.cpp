#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c=1;
            }
        }
        if(c==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
