#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll n)
{
    if(n==1)return 1;
    return n+func(n/2);
}
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<func(n)<<endl;
    }
    return 0;
}
