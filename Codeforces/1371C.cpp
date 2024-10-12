#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>n>>m;
        if((a+b)>=(n+m)&&min(a,b)>=m)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
