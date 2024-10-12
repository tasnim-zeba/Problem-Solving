#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[102][102];
///ll b[102][102];
int main()
{
    ll t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++){
             for(j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        ll ans=0;
         for(i=1;i<=n;i++){
             for(j=1;j<=m;j++){
                ///c=(a[i][j]+a[n-i+1][j]+a[i][m-j+1]);
                vector<ll>v;
                v.push_back(a[i][j]);
                v.push_back(a[n-i+1][j]);
                v.push_back(a[i][m-j+1]);
                sort(v.begin(),v.end());
                a[i][j]=a[n-i+1][j]=a[i][m-j+1]=v[1];
                ans=ans+(v[2]-v[1])+(v[1]-v[0]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
