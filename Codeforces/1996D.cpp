#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p,q,r;
        cin>>n>>x;
        p = min((n-1)/2, x-2);
        ll ans = 0;
        for(int i=1; i<=p; i++)
        {
            for(int j=1; j*i<n&&(i+j)<x ; j++)
            {
                ll r = min((x-i-j),(n-i*j)/(i+j));
                ans = ans + max(0LL, r);
                if(r<0)break;
            }
        }
        cout<<ans<<endl;
    }
}
