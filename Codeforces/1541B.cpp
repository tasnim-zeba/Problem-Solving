#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        c=0;
        for(i=1;i<=n;i++)
        {
            for(j=(a[i]-i); ;j=j+a[i])
            ///for(j=i+1;j<=n;j++)
            {
                if(j<=i)
                {
                    continue;
                }
                if(j>n)
                {
                    break;
                }
                if((a[i]*a[j])==(i+j))
                {
                    c++;
                }
                ///cout<<c<<endl;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
