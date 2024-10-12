#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=min(a,b);
        y=max(a,b);
        if((a+b)%3==0&&2*x>=y)
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
