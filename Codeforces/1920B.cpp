#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,x,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        int a[n+1],s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
       // cout<<s<<endl<<endl;
        sort(a,a+n);
        reverse(a,a+n);
        int ans=INT_MIN;
        int p[n+1];
        p[0]=a[0];
        for(i=1;i<n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        if(k==n)ans=0,k--;
        for(i=0;i<=k;i++)
        {
            int tempS=s;
            if((i-1)>=0)
            {
                tempS-=p[i-1];
            }
            int r = min(n-1,i+x-1);
            int l = i-1;
            if(l>=0)
                tempS-=2*(p[r]-p[l]);
            else
                tempS-=2*p[r];
            ans=max(ans,tempS);
        }
        cout<<ans<<endl;
    }
}
