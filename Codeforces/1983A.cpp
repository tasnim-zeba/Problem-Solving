#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, i, j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(int i=1; i<=n; i++)
        {
            a[i] = i;
        }
        for(int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
