#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<-a[0]<<endl;
    }
    else
    {
        cout<<1<<" "<<1<<endl;
        cout<<-a[0]<<endl;
        a[0]=0;
        cout<<2<<" "<<n<<endl;
        for(i=1;i<n;i++)
        {
            ll k=(a[i]%n)*(n-1);
            a[i]+=k;
            cout<<k<<" ";
        }
        cout<<endl;
        cout<<1<<" "<<n<<endl;
        for(i=0;i<n;i++)
        {
            cout<<-a[i]<<" ";
        }
        cout<<endl;
    }
}
