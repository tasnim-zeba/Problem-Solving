#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,s,i,c;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    c=1,s=0;
    for(i=0;i<n;i++)
    {
        s=s+abs(a[i]-c);
        c++;
    }
    cout<<s<<endl;
    return 0;
}
