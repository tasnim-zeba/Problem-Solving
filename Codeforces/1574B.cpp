#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,m,t,mx,l,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>m;
        r=a+b+c-3;
        mx=max(a,max(b,c));
        if(a==mx)
        {
            l=1+b+c;
        }
        else if(b==mx)
        {
            l=1+a+c;
        }
        else if(c==mx)
        {
            l=1+a+b;
        }
        l=mx-l;
        if(m>=l&&m<=r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
