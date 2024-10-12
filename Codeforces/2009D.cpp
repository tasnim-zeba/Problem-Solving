#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2][n+1];
        for(int i=0; i<=n; i++)
        {
            a[0][i] = 0;
            a[1][i] = 0;
        }
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin>>x>>y;
            a[y][x] = 1;
        }
        ll ans = 0;
        for(int i=0; i<=n; i++)
        {
            if(a[0][i]==1 && a[1][i] == 1)
            {
                ans = ans + (n-2);
            }
            if(i==0 || i==n)continue;
            if(a[0][i]==1 && a[1][i-1]==1 && a[1][i+1]==1)
            {
                ans++;
            }
            if(a[1][i]==1 && a[0][i-1]==1 && a[0][i+1]==1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}


