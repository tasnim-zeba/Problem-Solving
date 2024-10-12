#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,l,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)cin>>a[i];

        int ans=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                k=n/i;
                int G=0;
                for(j=0;j<k;j++)
                {
                    int g=0;
                    for(l=j;l<n;l+=k)
                    {
                        int diff = abs(a[l] - a[j]);
                        g=__gcd(g,diff);
                    }
                    G=__gcd(G,g);
                }
                if(G==0 || G>=2)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
