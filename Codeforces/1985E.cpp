#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, x,y,z,k,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z>>k;
        ll ans=0;
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=y;j++)
            {
                if(k%(i*j)==0&&(k/(i*j))<=z)
                {
                    c=k/(i*j);
                    ans=max(ans,(x - i +1)*(y-j+1)*(z-c+1));
                }
            }
        }
        cout<<ans<<endl;
    }
}
