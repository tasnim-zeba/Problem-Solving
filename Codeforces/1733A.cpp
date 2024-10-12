#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n+1],ans[k+1];
        for(i=0;i<=k;i++)
        {
            ans[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            ans[i%k]=max(ans[i%k],a[i]);
        }
        long long res=0;
        for(i=0;i<k;i++)
        {
            res+=ans[i];
        }
        cout<<res<<endl;
    }
}
