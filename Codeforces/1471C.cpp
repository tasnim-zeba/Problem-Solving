#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,i,j,ans,x;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll k[n],c[m];
        for(i=1;i<=n;i++){
            cin>>k[i];
        }
        for(i=1;i<=m;i++){
            cin>>c[i];
        }
        sort(k+1,k+n+1);
        reverse(k+1,k+n+1);
        x=1,ans=0;
        for(i=1;i<=n;i++){
                if(k[i]>=x){
                    ans=ans+c[i];
                }else{
                    ans=ans+c[k[i]];
                }
           x++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
