#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,g,b,i,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>g>>b;
        if(n%2==0)
        {
            x=n/2;
        }
        else
        {
            x=(n/2)+1;
        }
        if(x%g==0)
        {
            ans=(x/g)*g+((x/g)-1)*b;
        }
        else
        {
            ans=(x/g)*(g+b)+(x%g);
        }
        if(ans<n)
        {
            ans=n;
        }
        cout<<ans<<endl;
    }
}
