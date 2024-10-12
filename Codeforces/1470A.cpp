#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,j,m;
    ll s=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int k[n+1];
        int c[m+1];
        for(i=1;i<=n;i++)
        {
            cin>>k[i];
        }
        for(i=1;i<=m;i++)
        {
            cin>>c[i];
        }
        sort(k+1,k+n+1);
        s=0;
        j=1;
        for(i=n;i>=1;i--)
        {
            if(j>m)
            {
                s=s+c[k[i]];
                continue;
            }
            if(c[k[i]]>c[j])
            {
                s=s+c[j];
                ///cout<<c[j]<<endl;
                j++;
            }
            else
            {
                s=s+c[k[i]];
                ///cout<<c[k[i]]<<endl;
            }
        }
        cout<<s<<endl;
    }
}
