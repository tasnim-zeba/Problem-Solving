#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll d = (r-l)*2LL;
        ll v= 1LL + 4*d;
        ll x= (sqrt(v) - 1LL)/2LL;
        cout<<x+1<<endl;
    }
}

