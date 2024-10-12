#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n<m)swap(n,m);
        if(n==1&&m==1)cout<<0<<endl;
        else
        cout<<5+(n-1)+2*(m-3)<<endl;
    }
}
