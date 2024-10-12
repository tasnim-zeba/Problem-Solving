#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        int a[n+1], u[k+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=k; i++)
        {
            cin>>u[i];
        }
        ll ans = 0;
        for(int i=1; i<=min(2*n,d); i++)
        {
            int cnt =0;
            for(int j=1; j<=n; j++)
            {
                if(a[j]==j)
                {
                    cnt++;
                }
            }
            ans = max(ans, cnt+(d-i)/2LL);
            int x;
            if(i%k==0)x=k;
            else x = i%k;
            for(int j=1; j<=u[x]; j++)
            {
                a[j]++;
            }
        }
        cout<<ans<<endl;
    }
}
