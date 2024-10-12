#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,ans,c,x;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ans=LLONG_MAX;
    for(i=0;i<n;i++)
    {

        c=0;
        ll b[n+1]={0};
        ///b[i]=a[i];
        for(j=i-1;j>=0;j--)
        {
            x=b[j+1]-1;
            if(a[j]>=abs(x))
            {
                b[j]=(-1)*a[j];
                c++;
            }
            else
            {
                ll k=(abs(x)+a[j]-1)/a[j];
                c=c+k;
                b[j]=k*a[j]*(-1);
            }
        }
        for(j=i+1;j<n;j++)
        {
            x=b[j-1]+1;
            if(a[j]>=x)
            {
                b[j]=a[j];
                c++;
            }
            else
            {
                c=c+(x+a[j]-1)/a[j];
                b[j]=((x+a[j]-1)/a[j])*a[j];
            }
        }
        ans=min(ans,c);
    }
    cout<<ans<<endl;
    return 0;
}
