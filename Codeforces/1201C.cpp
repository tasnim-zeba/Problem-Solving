#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    long long  n,k,i,j,ans;
    cin>>n>>k;
    long long a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long c=1;
    ans=a[n/2];
    for(i=(n/2);i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            long long p=(a[i+1]-a[i])*c;
            if(p<=k)
            {
                k=k-p;
                ans=a[i+1];
                c++;
            }
            else
            {
                break;
            }
        }
        else
        {
            c++;
        }
    }
    if(c<=k)
    {
        ans+=(k/c);
    }
    cout<<ans<<endl;
}
