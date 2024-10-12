#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,x,idx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int ans[n+1];
        for(i=n;i>=1;i--)
        {
            if(a[i]==i)
            {
                ans[i]=0;
                continue;
            }
            for(j=1;j<i;j++)
            {
                if(i==a[j])
                {
                    x=j;
                    break;
                }
            }
            ans[i]=x;
            vector<int>v;
            for(j=x+1;j<=i;j++)
            {
                v.push_back(a[j]);
            }
            for(j=1;j<=x;j++)
            {
                v.push_back(a[j]);
            }
            for(j=1;j<=i;j++)
            {
                a[j]=v[j-1];
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
