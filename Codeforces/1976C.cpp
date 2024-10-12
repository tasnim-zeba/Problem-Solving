#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+m+3], b[n+m+3], c[n+m+3];
        for(int i=1; i<=n+m+1; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n+m+1; i++)
        {
            cin>>b[i];
        }
        ll ans = 0;
        int c1=0, c2=0, f = 0, extra = -1;
        for(int i=1; i<=n+m+1; i++)
        {
            if(a[i]>b[i])
            {
                if(c1<n)
                {
                    ans=ans+a[i];
                    c1++;
                    c[i] = 1;
                }
                else if(c1==n && extra==-1)
                {
                    ans=ans+b[i];
                    extra = a[i]-b[i];
                    f=1;
                }
                else if(c2<m)
                {
                    ans=ans+b[i];
                    c2++;
                    c[i] = 2;
                }
                else if(c2==m && extra==-1)
                {
                    ans=ans+b[i];
                    extra = a[i]-b[i];
                    f=2;
                }
            }
            else
            {
                if(c2<m)
                {
                    ans=ans+b[i];
                    c2++;
                    c[i] = 2;
                }
                else if(c2==m && extra==-1)
                {
                    ans=ans+a[i];
                    extra = b[i]-a[i];
                    f=2;
                }
                else if(c1<n)
                {
                    ans=ans+a[i];
                    c1++;
                    c[i] = 1;
                }
                else if(c1==n && extra==-1)
                {
                    ans=ans+a[i];
                    extra = b[i]-a[i];
                    f=1;
                }
            }
        }
        ll ans1=ans;
        for(int i=1; i<=n+m+1; i++)
        {
            ans1 = ans;
            if(c[i]==1){
                ans1=ans1 - a[i];
                if(f==1){
                    ans1=ans1+extra;
                }
            }
            else{
                ans1=ans1-b[i];
                if(f==2){
                    ans1=ans1+extra;
                }
            }
            cout<<ans1<<" ";
        }
        cout<<endl;
    }
}
