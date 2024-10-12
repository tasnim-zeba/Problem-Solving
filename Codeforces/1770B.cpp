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
        ll v[n+1];
        j=n;
        for(i=1;i<=n;i=i+2)
        {
            v[i]=j;
            j--;
        }
        j=1;
        for(i=2;i<=n;i=i+2)
        {
            v[i]=j;
            j++;
        }
        for(i=1;i<=n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
