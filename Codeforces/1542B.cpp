#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,a,b,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        c=0;
        x=1;
        while(x<=n)
        {
            if((n-x)%b==0)
            {
                c=1;
                break;
            }
            if(a==1)
            {
                break;
            }
            x=x*a;
        }
        if(c)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
