#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,i,mx;
    cin>>n;
    vector<ll>a(100005,0);
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    vector<ll>b(100005,0);
    b[0]=0;
    b[1]=a[1];
    mx=LONG_MIN;
    for(i=2;i<=100005;i++)
    {
        b[i]=max(b[i-1],(b[i-2]+(a[i]*i)));
        mx=max(mx,b[i]);
    }
    cout<<mx<<endl;
    return 0;
}
